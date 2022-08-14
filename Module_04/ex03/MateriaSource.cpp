/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 02:17:39 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/14 05:08:07 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
        slot[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource &M)
{
    *this = M;
}
MateriaSource & MateriaSource::operator=(const MateriaSource &M)
{
    for(int i = 0 ; i< 4 && slot[i] ; i++)
        delete slot[i];
    for(int i = 0;i < 4 ;i++)
        this->slot[i] = M.slot[i];
    return *this;
}
MateriaSource::~MateriaSource()
{
    for(int i = 0 ; i< 4 && slot[i] ; i++)
        delete slot[i];
}
void MateriaSource::learnMateria(AMateria* AM)
{
    int i = 0;
    while(i < 4 && slot[i] && ++i);
    if (i < 4)slot[i] = AM;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{   
    for(int i = 0 ; i < 4 && slot[i]; i++)
        if (type == slot[i]->getType())
            return slot[i]->clone();
    return NULL;
}