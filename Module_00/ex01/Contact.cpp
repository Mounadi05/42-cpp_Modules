/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 03:50:47 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/29 03:50:51 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::GetFirstName(void)
{
    return FirstName;
}
void Contact::SetFirstName(std::string name)
{
    FirstName = name;
}
std::string Contact::GetLastName(void)
{
    return LastName;
}
void Contact::SetLastName(std::string name)
{
    LastName = name;
}
std::string Contact::GetNickname(void)
{
    return Nickname ;
}
void Contact::SetNickname(std::string name)
{
    Nickname = name;
}
std::string Contact::GetPhoneNumber(void)
{
    return PhoneNumber;
}
void Contact::SetPhoneNumber(std::string name)
{
    PhoneNumber = name;
}
std::string Contact::GetDarkestSecret(void)
{
    return DarkestSecret;
}
void Contact::SetDarkestSecret(std::string name)
{
    DarkestSecret = name;
}