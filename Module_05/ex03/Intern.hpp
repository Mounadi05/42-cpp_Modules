/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 03:35:02 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/18 04:40:45 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP_
#define INTERN_HPP_
#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Intern{
    private:
        int hash(std::string str);
    public :
        Intern();
        Intern(const Intern &I);
        Intern & operator= (const Intern &I);
        ~Intern();
        Form *makeForm(std::string name , std::string target);
};

#endif