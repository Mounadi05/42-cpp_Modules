/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:58:00 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/11 03:54:12 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called " << std::endl;
}
FragTrap::FragTrap(std::string name)
{
    this->name = name;
    hp = 100;
    ep = 100;
    ad = 30;
    std::cout << "FragTrap constructor called " << std::endl;
}

FragTrap::FragTrap(const FragTrap &st)
{
    *this = st;
}
FragTrap& FragTrap::operator= (const FragTrap &st)
{
    this->name = st.name;
    this->hp = st.hp;
    this->ep = st.ep;
    this->ad = st.ad;
    return *this;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called " << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high Fives" << std::endl;
}
void FragTrap::attack(const std::string& target)
{
    if (ep <= 0 || hp <= 0)
        std::cout << "ScavTrap can’t do anything" << std::endl;
    else
    {
        ep--;
        std::cout << "FragTrap " << name << " attacks " << target << " causing " << ad << " points of damage " << std::endl;
    }
}
