/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:46:15 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/13 15:30:45 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

const std::string & Animal::getType() const
{
    return type;
}

Animal::Animal(const Animal &a)
{
    *this = a;
}

 Animal & Animal::operator=(const Animal &a)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = a.type;
    return *this;
}
Animal::~Animal()
{
    std::cout << "Animal destructor called " << std::endl;
}