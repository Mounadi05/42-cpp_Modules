/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 03:42:36 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/18 03:44:15 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main ()
{
    try {
        Bureaucrat B("anass",12);
        RobotomyRequestForm S("test");
        S.beSigned(B);
        B.executeForm(S);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}