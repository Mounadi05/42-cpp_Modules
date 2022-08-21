/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 21:50:48 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/20 21:50:49 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main ()
{
    Data D;
    Data *E;
    D.i = 253;
    D.f = 42.0f;
    D.c = 'A';
    D.str = "hello world";
    PrintData(D);
    uintptr_t uptr =serialize(&D);
    E = deserialize(uptr);
   PrintData(*E);
}