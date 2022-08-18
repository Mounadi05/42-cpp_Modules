/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 03:42:36 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/18 01:03:52 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
    try{
        Form F("test", 17,30);
        std::cout << F;
        Bureaucrat B("anass", 10);
        std::cout << B;
        F.beSigned(B);           
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
  
}