/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:38:26 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/14 03:14:24 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef AMATERIA_HPP_
#define AMATERIA_HPP_

class ICharacter;
#include <iostream>
class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &A);
        AMateria & operator = (const AMateria &A);
        virtual ~AMateria();
        std::string const & getType() const; 
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif