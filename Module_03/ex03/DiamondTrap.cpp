/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:02:29 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/10 06:34:13 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(std::string name):ClapTrap(name),ScavTrap(name),FragTrap(name)
{
    this->name = name;
    this->hp = FragTrap::hp;
    this->ep = ScavTrap::ep;
    this->ad = FragTrap::ad;
    std::cout << "DiamondTrap constructor called " << std::endl;

};

DiamondTrap::DiamondTrap(const DiamondTrap &D)
{
    *this = D;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &D)
{
    this->name = D.name;
    this->hp = D.hp;
    this->ep = D.ep;
    this->ad = D.ad;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called " << std::endl;
}