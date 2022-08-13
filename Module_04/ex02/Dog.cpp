/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:46:49 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/12 18:43:36 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->b = new Brain(); 
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &a)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = a;
}
Dog & Dog::operator=(const Dog &a)
{
    delete this->b;
    this->type = a.type;
    this->b = new Brain(*a.b);
    return *this;
}
Dog::~Dog()
{
    delete this->b;
    std::cout << "Dog destructor called " << std::endl;
}
void Dog::makeSound() const 
{
    std::cout << "Dog bark" << std::endl;
}
