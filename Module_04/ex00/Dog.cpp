/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:08:58 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/12 16:23:17 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &a)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = a;
}
Dog & Dog::operator=(const Dog &a)
{
    this->type = a.type;
    return *this;
}
Dog::~Dog()
{
    std::cout << "Dog destructor called " << std::endl;
}
void Dog::makeSound() const 
{
    std::cout << "Dog bark" << std::endl;
}
