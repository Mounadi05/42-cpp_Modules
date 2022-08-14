/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:27:51 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/14 05:09:41 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
AMateria::AMateria()
{
}
AMateria::AMateria(std::string const & type)
:type(type)
{
}
AMateria::AMateria(const AMateria &A)
{
    *this = A;
}
AMateria & AMateria::operator = (const AMateria &A)
{
    this->type = A.type;
    return *this;
}
AMateria::~AMateria()
{
    
}
std::string const & AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}