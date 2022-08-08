/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:42:13 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/08 00:40:25 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP_
#define FIXED_HPP_

# include <iostream>
# include <cmath>


 class Fixed{
    private :
        int raw;
        static const int nfb = 8;
    public :
    Fixed();
    Fixed(const int  raw);
    Fixed(const float raw);
    ~Fixed();
    Fixed(const Fixed & point);
    Fixed& operator= (const Fixed& Fixed);
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    bool operator> (const Fixed& Fixed) const;
    bool operator< (const Fixed& Fixed)const;
    bool operator>= (const Fixed& Fixed)const;
    bool operator<= (const Fixed& Fixed)const;
    bool operator== (const Fixed& Fixed)const;
    bool operator!= (const Fixed& Fixed)const;
    Fixed operator+ (const Fixed& Fixed)const;
    Fixed operator- (const Fixed& Fixed)const;
    Fixed operator* (const Fixed& Fixed);
    Fixed operator/ (const Fixed& Fixed)const;
    Fixed& operator++ ();
    Fixed operator++ (int);
    Fixed& operator-- ();
    Fixed operator-- (int);
    static Fixed & min(Fixed &a , Fixed &b);
    static const Fixed   &min(const Fixed  &a ,const Fixed  &b) ;
    static Fixed & max(Fixed &a , Fixed &b);
    static const Fixed  &max(const Fixed  &a , const Fixed &b);
 };
std::ostream& operator << (std::ostream &os ,const Fixed& Fixed);


#endif