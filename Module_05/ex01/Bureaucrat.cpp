/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 03:42:31 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/17 22:29:37 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
    
}
Bureaucrat::Bureaucrat(std::string name, int grade)
:name(name)
{
    if (grade <= 0)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        this->grade = grade; 
}
Bureaucrat::Bureaucrat(const Bureaucrat &B)
{
    *this = B;
}
Bureaucrat & Bureaucrat::operator= (const Bureaucrat &B)
{
    this->grade = B.grade;
    return *this;
}
std::string Bureaucrat::getName() const
{
    return name;
}
int Bureaucrat::getGrade() const
{
    return grade;
}
std::ostream& operator<< (std::ostream &cout ,const Bureaucrat &B)
{
     cout << B.getName() << " bureaucrat grade " << B.getGrade() << std::endl;
     return cout;
}
const char * Bureaucrat::GradeTooHighException::what ()const throw () 
{
      return "Grade Too High";      
}
const char * Bureaucrat::GradeTooLowException::what () const throw () 
{
      return "Grade Too Low";
}
Bureaucrat::~Bureaucrat()
{
    
}
void Bureaucrat::increment()
{
    if (grade - 1 < 1)
        throw GradeTooHighException();
    grade--;
}
void  Bureaucrat::decrement()
{
   
    if (grade + 1 > 150)
        throw GradeTooLowException();
    grade++;   
}
void Bureaucrat::signForm(Form &F)
{
   if (F.getS())
        std::cout << this->name  << " signed " << F.getName() <<std::endl;
    else
        std::cout << this->name << " couldn’t sign "  << F.getName() << " because is grade sing " << F.getGradeSing() << " is high than " << name << std::endl;
}