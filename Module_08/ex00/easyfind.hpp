#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_
#include <iostream>
template <typename T>
bool easyfind(T type, int n)
{
    return(std::find(type.begin(), type.end(), n) != type.end());
}   

#endif