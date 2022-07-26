/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 00:21:35 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/14 05:02:33 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP_
#define CURE_HPP_

#include "AMateria.hpp"
#include "ICharacter.hpp"
class Cure : public AMateria
{
    public :
        Cure();
        Cure(const Cure &A);
        Cure & operator = (const Cure &A);
        ~Cure();
        std::string const & getType() const;
        AMateria* clone() const ;
        void use(ICharacter& target);
};
#endif