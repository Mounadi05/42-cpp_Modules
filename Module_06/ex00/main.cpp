/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 21:52:02 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/20 21:52:03 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cstring>

int main (int ac , char **av)
{
    //std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout.setf(std::ios::showpoint);
    if (ac == 2)
    {
        double d = strtod(av[1], NULL);
         if (d !=(double) -2147483648 && int(d) == -2147483648)
            std::cout << "char  : impossible" << std::endl;
        else if (!isprint(int(d)))
                std::cout << "char : Non displayable"  << std::endl;
        else
            std::cout << "char : '"<<(char )d<<"'" <<std::endl;
         if (d !=(double) -2147483648 && int(d) == -2147483648)
                std::cout << "int  : impossible" << std::endl;
            else
                std::cout << "int  : "<< int(d) << std::endl;
            std::cout << "float : "<< float(d) <<"f"<< std::endl;
            std::cout << "double : "<<d << std::endl;
    }
    else
        std::cout << "extra arguments or less arguments" << std::endl;
}