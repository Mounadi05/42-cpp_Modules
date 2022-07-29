/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 03:47:14 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/29 03:47:15 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}
Weapon::Weapon(std::string type)
    :type(type)
{

}
void  Weapon::setType(const std::string &type)
{
    this->type = type;
}
const  std::string & Weapon::getType (void) const
{
    return type;
}

