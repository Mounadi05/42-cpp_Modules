/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:28:27 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/12 16:23:36 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &a)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = a;
}
Cat & Cat::operator=(const Cat &a)
{
    this->type = a.type;
    return *this;
}
Cat::~Cat()
{
    std::cout << "Cat destructor called " << std::endl;
}
void Cat::makeSound() const 
{
    std::cout << "cats don’t bark" << std::endl;
}
