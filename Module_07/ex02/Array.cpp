/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array .cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:11:37 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/22 09:11:38 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class T>
Array<T>::Array()
{
   type = new T[0];
   _size = 0;
}
template <typename T>
Array<T>::Array(unsigned int n)
{
    type = new T[n];
    _size = n;
}
template <class T>
Array<T>::Array(const Array &A)
{
    *this = A;
}
template <class T>
Array<T> &Array<T>::operator=(const Array &A)
{  
    this->_size = A._size;
    this->type = new T[A._size];
    for(int i = 0; i < int(A._size); i++)
        this->type[i] =A.type[i];
    return *this;
}
template <class T>
Array<T>::~Array()
{
    delete [] type;
}
template <class T>
int Array<T>::size()
{
    return _size;
}
template <class T>
T &Array<T>::operator[](int i) 
{
    if (i >= 0 &&  i < (int)_size)
        return type[i];
    throw std::out_of_range("index is out of bounds");
      
}
