/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 03:46:13 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/29 03:48:50 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Wp)
    : Wp(Wp), name(name)
{

}

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << Wp.getType() << std::endl;
}
