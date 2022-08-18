/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 03:42:36 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/17 19:39:45 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    try{
        Bureaucrat A("anass", 1);
        std::cout << A;
        A.increment();    
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
  
}