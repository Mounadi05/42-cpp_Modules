/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 06:30:35 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/27 06:30:36 by mounadi05        ###   ########.fr       */
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
    std::cout << "called  default constructor " << std::endl;
}
Zombie::~Zombie()
{
    std::cout << name << " called  destructor " << std::endl;
}


         