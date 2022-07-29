/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 08:09:00 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/29 08:15:15 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "DEBUG : " ;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup";
    std::cout << " burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "INFO : " ;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put ";
    std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
}

void Harl::warning(void)
{
    std::cout << "WARNING : " ;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for";
    std::cout << " years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "ERROR : " ;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int Harl::hash(std::string level)
{
    int h = 0;
    for(int i = 0; i < (int )level.length(); i++)
        h += level[i] + i;
    return (h);
}

void Harl::complain( std::string level )
{
    void (Harl::*ptr) (void);

    switch (hash(level))
    {
        case 369:
            ptr = &Harl::debug;
            (this->*ptr)();
            break;
        case 306:
            ptr = &Harl::info;
            (this->*ptr)();
            break;
        case 555:
            ptr = &Harl::warning;
            (this->*ptr)();
            break;
        case 404:
            ptr = &Harl::error;
            (this->*ptr)();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}
