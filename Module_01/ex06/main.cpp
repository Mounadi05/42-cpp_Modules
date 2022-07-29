/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 08:09:23 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/29 08:09:27 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Harl.hpp"

int main (int ac , char **av)
{
    Harl test;
    if (ac == 2)
        test.complain(av[1]);
    else
        std::cout << " * wrong argument * "<< std::endl;
}