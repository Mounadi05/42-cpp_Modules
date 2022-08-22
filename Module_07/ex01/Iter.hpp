/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:11:27 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/22 09:11:28 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP_
#define ITER_HPP_
#include <iostream>

template <typename T>
void iter (T *arr , int lent, void(*f)( T const &));
#endif