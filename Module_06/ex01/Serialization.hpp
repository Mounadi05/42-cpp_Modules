/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 21:51:42 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/20 21:51:43 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP
#include <iostream> 
#include <cstdint>
struct Data{
    int i;
    char c;
    float f;
    std::string str; 

};
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
void PrintData(Data);
#endif