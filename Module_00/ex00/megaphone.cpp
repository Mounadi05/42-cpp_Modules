/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 01:20:52 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/29 03:26:02 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac , char **av)
{
    if (ac > 1)
    {
        std::string str;
        for(int i = 1 ; i < ac ;i++)
        {
            str = av[i];
            for(int it = 0 ; it < (int )str.length() ; it++)
                std::cout << (char )toupper(str.at(it));
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
