/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:07:22 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/13 23:33:02 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include "ICharacter.hpp"
class Character : public ICharacter
{
    private :
        std::string name;
        AMateria *slot[4];
    public :
        Character(std::string name); 
        Character(const Character &C);
        Character & operator=(const Character &C);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif