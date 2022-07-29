/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 08:09:16 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/29 08:19:25 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup";
    std::cout << " burger. I really do!\n" << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put ";
    std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"<< std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl ;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for";
    std::cout << " years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]"  << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
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
        case 306:
            ptr = &Harl::info;
            (this->*ptr)();
        case 555:
            ptr = &Harl::warning;
            (this->*ptr)();
        case 404:
            ptr = &Harl::error;
            (this->*ptr)();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}
