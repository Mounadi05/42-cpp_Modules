/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 02:49:39 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/18 02:49:41 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSIDENTIAPARDONFORM_HPP_
#define PERSIDENTIAPARDONFORM_HPP_

#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form{
    private :
        std::string target;
    public :
        void execute(Bureaucrat const & executor) const;
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &SCF);
        PresidentialPardonForm & operator=(const PresidentialPardonForm &SCF);
        ~PresidentialPardonForm();
};
#endif