/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 06:36:23 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/27 22:31:48 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string name = "HI THIS IS BRAIN";
    std::string *stringPTR = &name;
    std::string &stringREF = name;
    std::cout << "The memory address of the string variable : "<< &name << std::endl;
    std::cout << "The memory address held by stringPTR      : "<< stringPTR << std::endl;
    std::cout << "The memory address held by stringREF      : "<< &stringREF << std::endl;
    std::cout << "The value of the string variable  : " <<name << std::endl;
    std::cout << "The value pointed to by stringPTR : " <<*stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF : "<< stringREF << std::endl;
}