/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 01:19:05 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/18 02:20:10 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFROM_HPP_
#define ROBOTOMYREQUESTFROM_HPP_

#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form{
    private :
        std::string target;
    public :
        void execute(Bureaucrat const & executor)const ;
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &SCF);
        RobotomyRequestForm & operator=(const RobotomyRequestForm &SCF);
        ~RobotomyRequestForm();
};
#endif