/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 01:04:50 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/08 03:39:33 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{

}

Point::Point(Fixed x, Fixed y)
{
    this->x = x;
    this->y = y;
}
Point::Point(Point &p)
{
    *this = p;
}
Point & Point::operator= (const Point &p)
{
    this->x = p.x;
    this->y = p.y; 
    return *this;
}
Point::~Point()
{

}
 Fixed Point::getX(void) const
{
    return this->x;
}
 Fixed Point::getY(void) const 
{
    return this->y;
}
