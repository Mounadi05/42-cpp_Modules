/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 09:53:28 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/07 22:21:45 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
 : raw(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& point)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = point;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
Fixed& Fixed::operator= (const Fixed& Fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->raw = Fixed.raw;
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return raw;
}

void Fixed::setRawBits( int const raw )
{
    std::cout <<"setRawBits member function called" << std::endl;
    this->raw = raw;
}
