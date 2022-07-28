/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 06:30:25 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/28 03:08:26 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string & Zombie::GetName(void)
{
    return name;
}

void Zombie::SetName(const std::string &name)
{

    this->name = name;
}

void Zombie::announce( void )
{
    std::cout << GetName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie ()
{
    std::cout << "default constructor called" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << name << " destructor called" << std::endl;
}


         