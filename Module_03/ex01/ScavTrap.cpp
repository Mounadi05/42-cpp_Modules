/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:57:28 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/11 03:53:34 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
 
ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    hp = 100;
    ep = 50;
    ad = 20;
    std::cout << "ScavTrap constructors called " << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &st)
{
    *this = st;
}
ScavTrap& ScavTrap::operator= (const ScavTrap &st)
{
    this->name = st.name;
    this->hp = st.hp;
    this->ep = st.ep;
    this->ad = st.ad;
    return *this;
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called " << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gatekeeper mode." << std::endl;
}
void ScavTrap::attack(const std::string& target)
{
    if (ep <= 0 || hp <= 0)
        std::cout << "ScavTrap can’t do anything" << std::endl;
    else
    {
        ep--;
        std::cout << "ScavTrap " << name << " attacks " << target << " causing " << ad << " points of damage " << std::endl;
    }
}

