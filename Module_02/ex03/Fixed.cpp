/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:42:02 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/08 00:44:13 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
 : raw(0)
{
}
Fixed::Fixed(const int raw)
{
    this->raw = raw * (1 << nfb);
}
Fixed::Fixed(const float raw)
{
    this->raw = float(std::roundf(raw * (1 << nfb)));
}
Fixed::Fixed(const Fixed& point)
{
    *this = point;
}
Fixed::~Fixed()
{
   
}
Fixed& Fixed::operator= (const Fixed& F)
{
    this->raw = F.getRawBits();
    return *this;
}
float Fixed::toFloat( void ) const
{
    return float(raw) / (1 << nfb);
}
int Fixed::toInt( void ) const
{
    return (raw >> 8);   
}
std::ostream& operator << (std::ostream& os ,const Fixed& F)
{
    os << F.toFloat();
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
bool Fixed::operator> (const Fixed& F) const
{
    return this->raw > F.raw ? true : false;
}
bool Fixed::operator< (const Fixed& F) const
{
    return this->raw < F.raw ? true : false;
}
bool Fixed::operator<= (const Fixed& F)const
{
    return this->raw <= F.raw ? true : false;
}
bool Fixed::operator>= (const Fixed& F)const 
{
    return this->raw >= F.raw ? true : false;
}
bool Fixed::operator== (const Fixed& F)const 
{
    return this->raw == F.raw ? true : false;
}
bool Fixed::operator!= (const Fixed& F)const
{
    return this->raw != F.raw ? true : false;
}
Fixed Fixed::operator+ (const Fixed& F)const
{
    class Fixed tmp;
    tmp.raw = this->raw + F.raw;
    return tmp;
}
Fixed Fixed::operator- (const Fixed& F)const
{
    class Fixed tmp;
    tmp.raw = this->raw - F.raw;
    return tmp;
}
Fixed Fixed::operator* (const Fixed& F)
{
    class Fixed tmp;
    tmp.raw = (this->raw * F.raw) / (1 << nfb);
    return tmp;
}
Fixed Fixed::operator/ (const Fixed& F)const
{
    class Fixed tmp;
    tmp.raw = (float(this->raw) / F.raw) * (1 << nfb);
    
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
Fixed & Fixed::min(Fixed &a , Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed const & Fixed::min(const Fixed  &a , const Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed & Fixed::max(Fixed &a , Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed & Fixed::max(const Fixed &a , const Fixed &b)
{
    if (a > b)
        return a;
    return b;
}
