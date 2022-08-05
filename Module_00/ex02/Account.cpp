/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 00:04:28 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/05 20:50:27 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
# include <iomanip>
#include <time.h>

int Account::_nbAccounts;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;
int Account::_totalAmount;
Account::Account(void)
{
                    
}
Account::Account( int initial_deposit )
{
    _displayTimestamp();
    _accountIndex=0;
	_amount=0;
	_nbDeposits=0;
	_nbWithdrawals=0;
    static int i = 0;
    _accountIndex = i++;
    _amount =  initial_deposit;
    _totalAmount += _amount;
    _nbAccounts += 1;
    std::cout << "index:"<<_accountIndex<<";";
    std::cout << "amount:"<<_amount<<";";
    std::cout <<"created"<<std::endl;
}
 
Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:"<<_accountIndex<<";";
    std::cout << "amount:"<<_amount<<";";
    std::cout <<"closed"<<std::endl;
}
int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}
int	Account::getTotalAmount( void )
{
    return _totalAmount;
}
int	Account::getNbDeposits( void )
{
    return  _totalNbDeposits;
}
int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}
int		Account::checkAmount( void ) const
{
    return _amount;
}
void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts<<";";
    std::cout << "total:" << _totalAmount<<";";
    std::cout << "deposits:"<< _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals<<  std::endl;
}
void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:"<<_accountIndex<<";";
    std::cout << "amount:"<<_amount<<";";
    std::cout << "deposits:"<<_nbDeposits<<";";
    std::cout << "withdrawals:"<<_nbWithdrawals << std::endl; 
}

void	Account::_displayTimestamp( void )
{
    time_t curr_time;
	curr_time = time(NULL);

	tm *tm = localtime(&curr_time); 
    std::cout << "[" << (tm->tm_year + 1900) 
    << std::setw(2) << std::setfill('0') << (tm->tm_mon + 1) 
    << std::setw(2) << std::setfill('0') <<  tm->tm_mday
    << "_"  << std::setw(2) << std::setfill('0') <<  (tm->tm_hour) 
    << std::setw(2) << std::setfill('0') <<  (tm->tm_min) 
    << std::setw(2) << std::setfill('0') <<  (tm->tm_sec)
    << "] ";
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:"<<_accountIndex<<";";
    std::cout << "p_amount:"<<_amount<<";";
    std::cout << "deposits:"<<deposit<<";";
    _nbDeposits = 1;
    _amount += deposit; 
    _totalAmount += deposit;
    _totalNbDeposits += 1;
    std::cout << "amount:"<<_amount<<";";
    std::cout << "nb_deposits:"<<_nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:"<<_accountIndex<<";";
    std::cout << "p_amount:"<<_amount<<";";
    if (withdrawal < _amount)
    {
        _nbWithdrawals = 1;
        std::cout << "withdrawals:"<<withdrawal<<";"; 
        _amount -= withdrawal;
        _totalNbWithdrawals +=1;
        _totalAmount -= withdrawal;
        std::cout << "amount:"<<_amount<<";";
        std::cout << "nb_withdrawals:"<<_nbWithdrawals << std::endl; 
        return true;
    }
    else
    {
        std::cout << "withdrawals:"<<"refused"<< std::endl; 
        return false;
    }
    
}




