/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 09:53:21 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/31 09:53:22 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP_
#define FIXED_HPP_

# include <iostream>

 class Fixed{
    private :
        int raw;
        static const int nfb = 8;
    public :
    Fixed();
    ~Fixed();
    Fixed(const Fixed & point);
    Fixed& operator= (const Fixed& Fixed);
    int getRawBits( void ) const;
    void setRawBits( int const raw );


 };

#endif