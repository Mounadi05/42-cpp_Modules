/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 01:55:09 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/14 02:22:49 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP_
#define MATERIASOURCE_HPP_

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
     private :
        AMateria *slot[4];
     public:
        MateriaSource();
        MateriaSource(const MateriaSource &M);
        MateriaSource & operator=(const MateriaSource &M);
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
           
};

#endif