/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:55:52 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/11 03:52:33 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
: name(name),hp(10),ep(10),ad(0)
{
    std::cout << "constructors  called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &cl)
{
    *this = cl;
}
ClapTrap& ClapTrap::operator= (const ClapTrap &cl)
{
    this->name = cl.name;
    this->hp = cl.hp;
    this->ep = cl.ep;
    this->ad = cl.ad;
    return *this;
}
ClapTrap::~ClapTrap()
{
    std::cout << "destructor called " << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
    if (ep <= 0 || hp <= 0)
        std::cout << "ClapTrap can’t do anything" << std::endl;
    else
    {
        ep--;
        std::cout << "ClapTrap " << name << " attacks " << target << " causing " << ad << " points of damage " << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    hp -= amount;
    std::cout << "ClapTrap took " << amount <<  " Damage " << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    hp += amount;
    ep--;
    std::cout << "ClapTrap be Repaired" << std::endl;
}
