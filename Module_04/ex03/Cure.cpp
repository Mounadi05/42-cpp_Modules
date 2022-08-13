/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 00:24:06 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/14 00:24:07 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    
}
Cure::Cure(std::string const & type) : AMateria(type)
{
    
}
Cure::Cure(const Cure &A)
{
    *this = A;
}
Cure & Cure::operator = (const Cure &A)
{
    this->type =  A.type;
    return *this;
}
Cure::~Cure()
{
    
}
std::string const & Cure::getType() const
{
    return type;
}
AMateria* Cure::clone() const 
{
    AMateria *P = new Cure();
    return P;
}
void use(ICharacter& target)
{
    std::cout << "* heals " <<  target.getName() <<"’s wounds *"<<std::endl;
}
