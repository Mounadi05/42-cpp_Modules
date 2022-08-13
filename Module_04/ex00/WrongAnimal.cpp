/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:36:37 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/12 16:40:00 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

const std::string & WrongAnimal::getType() const
{
    return type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = a;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &a)
{
    this->type = a.type;
    return *this;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called " << std::endl;
}
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}
