/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 03:34:58 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/18 04:50:12 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"

Intern::Intern()
{
    
}
Intern::Intern(const Intern &I)
{
    *this = I;
}
Intern & Intern::operator =(const Intern &I)
{
    (void)I;
    return *this;
}
Intern::~Intern()
{
    
}
int Intern::hash(std::string str)
{
    int l = 0;
    for (int i = 0; i < (int)str.length(); i++)
        l += str[i] + i;
    return l;
}
Form *Intern::makeForm(std::string name, std::string target)
{
    Form *P = NULL;
    switch (hash(name))
    {
        case 2020:
            P = new ShrubberyCreationForm(target);
            std::cout << "Intern creates shrubbery creation" << std::endl;
            break;
        case 2131:
            P = new PresidentialPardonForm(target);
            std::cout << "Intern creates presidential pardon" << std::endl;
            break;
        case 1820:
            P = new RobotomyRequestForm(target);
            std::cout << "Intern creates robotomy request" << std::endl;
            break;
        default:
            std::cout << "name doesn’t exist" << std::endl;
        break;
    }
    if (!P)
        exit(1);
    return P;
}
