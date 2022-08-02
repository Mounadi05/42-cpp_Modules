/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:42:02 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/02 23:17:15 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
 : raw(0)
{
}
Fixed::Fixed(const int raw)
{
    this->raw = (raw << nfb);
}
Fixed::Fixed(const float raw)
{
    this->raw = std::roundf(raw * (1 << nfb));
}
Fixed::Fixed(const Fixed& point)
{
    *this = point;
}
Fixed::~Fixed()
{
   
}
Fixed& Fixed::operator= (const Fixed& Fixed)
{
    this->raw = Fixed.getRawBits();
    return *this;
}
float Fixed::toFloat( void ) const
{
    return float(float(getRawBits()) / (1 << nfb));
}
int Fixed::toInt( void ) const
{
    return (getRawBits() >> 8);   
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
bool Fixed::operator> (const Fixed& Fixed)
{
    return this->raw > Fixed.raw ? true : false;
}
bool Fixed::operator< (const Fixed& Fixed)
{
    return this->raw < Fixed.raw ? true : false;
}
bool Fixed::operator<= (const Fixed& Fixed)
{
    return this->raw <= Fixed.raw ? true : false;
}
bool Fixed::operator>= (const Fixed& Fixed)
{
    return this->raw >= Fixed.raw ? true : false;
}
bool Fixed::operator== (const Fixed& Fixed)
{
    return this->raw == Fixed.raw ? true : false;
}
bool Fixed::operator!= (const Fixed& Fixed)
{
    return this->raw != Fixed.raw ? true : false;
}
Fixed Fixed::operator+ (const Fixed& Fixed)
{
    class Fixed tmp;
    tmp.raw = this->raw + Fixed.raw;
    return tmp;
}
Fixed Fixed::operator- (const Fixed& Fixed)
{
    class Fixed tmp;
    tmp.raw = this->raw - Fixed.raw;
    return tmp;
}
Fixed Fixed::operator* (const Fixed& Fixed)
{
    class Fixed tmp;
    tmp.raw = (this->raw * Fixed.raw) / (1 << nfb);
    return tmp;
}
Fixed Fixed::operator/ (const Fixed& Fixed)
{
    class Fixed tmp;
    tmp.raw = (this->raw / Fixed.raw);
    
    return tmp;
}
Fixed& Fixed::operator++ ()
{
    raw++;
    return *this;
}
Fixed Fixed::operator++ (int)
{
    Fixed old = *this;
    raw++;
    return old;
}
Fixed& Fixed::operator-- ()
{
    raw--;
    return *this;
}
Fixed Fixed::operator-- (int)
{
    Fixed old = *this;
    raw--;
    return old;
}



