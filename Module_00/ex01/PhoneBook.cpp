/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 03:50:59 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/31 11:11:27 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::Affiche (int index)
{
    std::cout << "\n\tFirst Name : " << contacts[index].GetFirstName() << std::endl;
    std::cout << "\tLast Name : " << contacts[index].GetLastName() << std::endl;
    std::cout << "\tnickname : " << contacts[index].GetNickname() << std::endl;
    std::cout << "\tPhone Number : " << contacts[index].GetPhoneNumber() << std::endl;
    std::cout << "\tDarkest Secret : " << contacts[index].GetDarkestSecret() << std::endl;
    
}

void PhoneBook::ShiftContact()
{
    std::string tmp;
    for(int i = 7; i > 0; i--)
    {
        tmp = contacts[i].GetFirstName();
        contacts[i].SetFirstName(contacts[i - 1].GetFirstName());
        contacts[i - 1].SetFirstName(tmp);
        tmp = contacts[i].GetLastName();
        contacts[i].SetLastName(contacts[i - 1].GetLastName());
        contacts[i - 1].SetLastName(tmp);
        tmp = contacts[i].GetNickname();
        contacts[i].SetNickname(contacts[i - 1].GetNickname());
        contacts[i - 1].SetNickname(tmp);
        tmp = contacts[i].GetPhoneNumber();
        contacts[i].SetPhoneNumber(contacts[i - 1].GetPhoneNumber());
        contacts[i - 1].SetPhoneNumber(tmp);
        tmp = contacts[i].GetDarkestSecret();
        contacts[i].SetDarkestSecret(contacts[i - 1].GetDarkestSecret());
        contacts[i - 1].SetDarkestSecret(tmp);
    } 
}

void PhoneBook::PrintWithWidth(std::string str)
{
    if (str.length() > 9)
    {
        std::string tmp;
        for(int i = 0 ;i < 9; i++)
            tmp.push_back(str.at(i));
        tmp.push_back('.');
        std::cout <<  std::setw(11) << tmp << " |";
    }
    else
        std::cout <<  std::setw(11) << str << " |";
}
std::string PhoneBook::Check_Eof(std::string msg)
{
    std::string tmp;
    std::cout << msg;
    std::getline(std::cin,tmp);
    if (std::cin.eof())
        exit(0);
    while(tmp.empty())
    {
        std::cout << "\t* fields is empty , please insert correct info *" << std::endl;
        std::cout << msg;
        std::getline(std::cin,tmp);
        if (std::cin.eof())
             exit(0);
    }
    return tmp;
}
void PhoneBook::ADD(int i , int check)
{
    if (check == 7)
        ShiftContact();
    contacts[i].SetFirstName(Check_Eof("\t\tFirst Name : "));
    contacts[i].SetLastName(Check_Eof("\t\tLast Name : "));
    contacts[i].SetNickname(Check_Eof("\t\tnickname : "));
    contacts[i].SetPhoneNumber(Check_Eof("\t\tPhone Number : "));
    contacts[i].SetDarkestSecret(Check_Eof("\t\tDarkest Secret : "));
}
void PhoneBook::SEARCH(int i)
{
    int index;
    std::cout <<"---------------------------------------------------\n";
    std::cout <<"|  index   | first name | last name  |  nickname  |\n";
    std::cout <<"---------------------------------------------------\n";
    for (int it = 0 ; (it < i || it == 7) ; it++)
    {
        std::cout<< "| " << std::setw(8)<< it << " |";
        PrintWithWidth(contacts[it].GetFirstName());
        PrintWithWidth(contacts[it].GetLastName());
        PrintWithWidth(contacts[it].GetNickname());
        std::cout << std::endl;
        std::cout <<"---------------------------------------------------" << std::endl;
    }
    std::cout << "\t\tinsert index : " ;
    std::cin >> index;
    if (std::cin.eof())
        exit(0);
    else if (!std::cin.good())
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "\t * is not integer * " << std::endl;
    }
    else if (index < i && index >= 0)
        Affiche(index);
    else
        std::cout << "\t * the index is out of range or wrong * " << std::endl;
}
void PhoneBook::EXIT(void)
{
    exit(0);
}

