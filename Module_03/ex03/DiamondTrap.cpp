/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 02:02:29 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/11 01:04:18 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(std::string name):ClapTrap(name+"_clap_name")
{
    this->name = name;
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
void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap : i'm "<< name << std::endl;
    std::cout << "ClapTrap : i'm "<< ClapTrap::name << std::endl;

}
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called " << std::endl;
}