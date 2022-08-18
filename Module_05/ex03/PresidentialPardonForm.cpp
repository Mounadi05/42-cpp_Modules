/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 02:50:05 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/18 02:50:06 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon",72,45)
,target(target)
{
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &RRF)
{
    *this = RRF;
}
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &RRF) 
{
    this->target = RRF.target;
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm()
{

}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (Form::getS() && executor.getGrade() <= Form::getGradeExe())
            std::cout << target <<" has been pardoned by Zaphod Beeblebrox" << std::endl;
    else
        throw Form::NotExection();
}