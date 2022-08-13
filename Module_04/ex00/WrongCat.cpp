/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:41:36 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/12 16:42:02 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &a)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = a;
}
WrongCat & WrongCat::operator=(const WrongCat &a)
{
    this->type = a.type;
    return *this;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called " << std::endl;
}
void WrongCat::makeSound() const 
{
    std::cout << "cats don’t bark" << std::endl;
}
