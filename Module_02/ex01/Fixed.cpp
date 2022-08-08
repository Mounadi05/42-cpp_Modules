/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:42:02 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/07 22:29:56 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
 : raw(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int raw)
{
    this->raw = raw * (1 << nfb);
    std::cout << "int constructor called" << std::endl;
}
Fixed::Fixed(const float raw)
{
    this->raw = float(std::roundf(raw * (1 << nfb)));
    std::cout << "float  constructor called" << std::endl;
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
float Fixed::toFloat( void ) const
{
    return float(float(raw) / (1 << nfb));
}
int Fixed::toInt( void ) const
{
    return ((raw) >> 8);   
}
std::ostream& operator << (std::ostream& os ,const Fixed& Fixed)
{
    os << Fixed.toFloat();
    return os;
}

int Fixed::getRawBits( void ) const
{
    return raw;
}

void Fixed::setRawBits( int const raw )
{
    this->raw = raw;
}
