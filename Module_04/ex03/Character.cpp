/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:16:42 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/14 04:50:41 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
    this->name = name;
    for (int i = 0; i < 4; i++)
        slot[i] = NULL;
}
Character::Character(const Character &C)
{
    *this = C;
}
Character & Character::operator=(const Character &C)
{
    for(int i = 0 ; i < 4 && slot[i] ; i++)
        delete slot[i];
    this->name = C.name;
    for(int i = 0; i < 4; i++)
        this->slot[i] = C.slot[i];
    return *this;
}
Character::~Character()
{
    for(int i = 0 ; i< 4 && slot[i] ; i++)
        delete slot[i];
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{

    int i = 0;
    while(i < 4 && slot[i] && ++i);
    if (i < 4 && !slot[i])
        slot[i] = m;

}
void Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
        std::cout << "Error" << std::endl;
    else if (slot[idx])
        slot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
        if (idx > 3 || idx < 0)
            std::cout << "out of range" << std::endl;
        else if (slot[idx])
            slot[idx]->use(target);      
}