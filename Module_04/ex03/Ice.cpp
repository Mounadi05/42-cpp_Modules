/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:38:14 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/14 05:02:21 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    type = "ice";
}
Ice::Ice(const Ice &A)
{
    *this = A;
}
Ice & Ice::operator = (const Ice &A)
{
    this->type =  A.type;
    return *this;
}
Ice::~Ice()
{
    
}
std::string const & Ice::getType() const
{
    return type;
}
AMateria* Ice::clone() const 
{   
    AMateria *P = new Ice();
    return P;
}
void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() <<" * "<<std::endl;
}
