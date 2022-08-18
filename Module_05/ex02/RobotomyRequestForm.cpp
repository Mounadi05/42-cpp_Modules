/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 01:31:36 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/18 02:59:37 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request",72,45)
,target(target)
{
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &RRF)
{
    *this = RRF;
}
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &RRF) 
{
    this->target = RRF.target;
    return *this;
}
RobotomyRequestForm::~RobotomyRequestForm()
{

}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const 
{
    if (Form::getS() && executor.getGrade() <= Form::getGradeExe())
    {
       srand(time(0));
        if (rand() % 2)
            std::cout << target <<" has been robotomized successfully 50% of the time" << std::endl;
        else
            std::cout << target << " has failed " << std::endl;
    }
    else
        throw Form::NotExection();
}



