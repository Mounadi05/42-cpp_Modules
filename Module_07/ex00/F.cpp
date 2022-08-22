/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   F.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:11:08 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/22 09:11:09 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "F.hpp"
template <typename T>
void swap(T &a, T &b)
{
    T u = a;
    a = b;
    b = u;
}

template <typename T>
T min(T a, T b)
{
    return (a < b ? a:b);
}

template <typename T>
T max(T a, T b)
{
    return (a > b ? a:b);
}