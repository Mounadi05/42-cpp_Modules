/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 02:49:52 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/18 02:49:53 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFROM_HPP_
#define SHRUBBERYCREATIONFROM_HPP_

#include "Form.hpp"
#include <fstream>
#include "Bureaucrat.hpp"
class ShrubberyCreationForm : public Form{
    private :
        std::string target;
    public :
        void execute(Bureaucrat const & executor)const;
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &SCF);
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm &SCF);
        ~ShrubberyCreationForm();
};

#endif