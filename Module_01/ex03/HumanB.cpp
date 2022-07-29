/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 03:46:23 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/29 03:46:24 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
    : name(name)
{
    Wp = NULL;
}
void HumanB::setWeapon( Weapon &Wp)
{
    this->Wp = &Wp;
}

void HumanB::attack(void)
{
    if (Wp)
        std::cout << name << " attacks with their " << Wp->getType() << std::endl;
}