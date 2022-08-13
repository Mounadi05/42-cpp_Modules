/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:38:19 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/13 18:02:28 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP_
#define ICE_HPP_

#include "AMateria.hpp"
class Ice : public AMateria
{
    public :
        Ice();
        Ice(std::string const & type);
        Ice(const Ice &A);
        Ice & operator = (const Ice &A);
        ~Ice();
        std::string const & getType() const;
        AMateria* clone() const ;
        void use(ICharacter& target);
};
#endif