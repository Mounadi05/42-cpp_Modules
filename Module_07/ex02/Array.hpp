/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:11:50 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/22 09:11:51 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP_
#define ARRAY_HPP_
#include <iostream>
template <class T>
class Array{
    private:
        T *type;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &A);
        Array& operator= (const Array& A);
        ~Array();
        int size();
        T &operator[](int i);
        
};
#endif