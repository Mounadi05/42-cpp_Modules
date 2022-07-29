/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 08:08:08 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/29 08:08:09 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main (int ac, char **av)
{
    std::ofstream file_o;
    std::ifstream file_i;
    std::string name = ".replace";
    if (ac == 4)
    {
        int min = 0;
        std::string str;
        file_o.open(av[1] + name);
        file_i.open(av[1]);
        std::string find = av[2];
        while(getline(file_i, str))
        {
            while(((int )str.find(av[2]) != - 1))
            {
                min = str.find(av[2]);
                str.erase(min, find.length());
                str.insert(min,av[3]);
            }  
            file_o << str << std::endl;
        }
    }
    else 
        std::cout << "\t * wrong arguments *" << std::endl;
}