/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 21:51:37 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/20 21:51:38 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
void PrintData(Data D)
{
    std::cout <<"i : "<<D.i << std::endl;
    std::cout <<"c : "<<D.c << std::endl;
    std::cout <<"f : "<<D.f << std::endl;
    std::cout <<"str : "<<D.str << std::endl;

}
uintptr_t serialize(Data* ptr)
{
    uintptr_t uptr;
     uptr = reinterpret_cast<uintptr_t>(ptr);
    return uptr;
}
Data* deserialize(uintptr_t raw)
{
    Data *D = new Data;
    D = reinterpret_cast<Data *>(raw);
    return D;
}