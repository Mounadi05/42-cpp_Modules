/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:46:20 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/12 17:33:27 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>

class Animal{
protected :
    std::string type;
public :
    Animal();
    virtual void makeSound() const ;
    const std::string & getType() const;
    Animal(const Animal &a);
    Animal & operator=(const Animal &a);
    virtual ~Animal(); 
};

#endif