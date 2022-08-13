/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:46:31 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/12 18:42:26 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->b = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &a)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = a;
}
Cat & Cat::operator=(const Cat &a)
{
    delete this->b;
    this->type = a.type;
    this->b = new Brain(*a.b);
    return *this;
}
Cat::~Cat()
{
    std::cout << "Cat destructor called " << std::endl;
    delete this->b;
}
void Cat::makeSound() const 
{
    std::cout << "cats don’t bark" << std::endl;
}
