/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 08:09:09 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/29 08:17:00 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
int main ()
{
    Harl test;
    std::cout << "\n-------------------- TEST 2 ---------------------\n" << std::endl;
    test.complain("DEBUG");
    std::cout << "\n-------------------- TEST 2 ---------------------\n" << std::endl;
    test.complain("INFO");
    std::cout << "\n-------------------- TEST 3 ---------------------\n" << std::endl;
    test.complain("WARNING");
    std::cout << "\n-------------------- TEST 4 ---------------------\n" << std::endl;
    test.complain("ERROR");
    std::cout << "\n-------------------- TEST 5 ---------------------\n" << std::endl;
    test.complain("ERRfOR");
}