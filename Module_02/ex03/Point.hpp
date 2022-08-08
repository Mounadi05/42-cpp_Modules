/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 00:57:50 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/08 03:40:03 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP_
#define POINT_HPP_

# include <iostream>
# include "Fixed.hpp"
class Point {
    private :
        Fixed x;
        Fixed y;
    public :
        Point();
        Point(Fixed x, Fixed y);
        Point(Point &p);
        Point & operator = (const Point &p);
        ~Point();
        Fixed getX(void) const;
        Fixed getY(void) const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif

