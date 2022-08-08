/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 02:07:46 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/08 03:20:12 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area(Fixed x0, Fixed y0, Fixed x1, Fixed y1, Fixed x2, Fixed y2)
{
    Fixed b(2.0f);
    Fixed n(-1);
    Fixed a = (x0*(y1-y2) + x1*(y2-y0)+ x2*(y0-y1))/b;
    return (a > 0 ? a : n * a);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed p = area(a.getX(),a.getX(),b.getX(),b.getY(),c.getX(),c.getY());
    Fixed p1 = area(point.getX(),point.getY(),b.getX(),b.getY(),c.getX(),c.getY());
    Fixed p2 = area(point.getX(),point.getY(),a.getX(),a.getY(),c.getX(),c.getY());
    Fixed p3 = area(point.getX(),point.getY(),a.getX(),a.getY(),b.getX(),b.getY());
    if (p == p1 + p2 + p3)
        return true;
    return false; 
}