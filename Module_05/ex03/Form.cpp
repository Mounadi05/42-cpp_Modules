/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:53:42 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/18 04:51:51 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
Form::Form():
name(),grade_sing(),grade_exe()
{
    s = false;
}
Form::Form(std::string name, int grade_sing, int grade_exe)
:name(name), grade_sing(grade_sing),grade_exe(grade_exe)
{
    s  = false;
}
Form::Form(const Form &F)
:name(F.name),grade_sing(F.grade_sing),grade_exe(F.grade_exe)
{
    *this = F;
}
Form &Form::operator=(const Form &F)
{
    this->s = F.s;
    return *this;
}
Form::~Form()
{

}
std::string Form::getName() const
{
    return name;
}
bool Form::getS() const
{
    return s;
}

int Form::getGradeSing() const
{
    return grade_sing;
}
int Form::getGradeExe()const
{
    return grade_exe;
}
void Form::beSigned(const Bureaucrat &F)
{
    if (F.getGrade() > grade_sing)
    {
        F.signForm(*this);
        throw GradeTooLowException();
    }
    s = true;
    F.signForm(*this);
}
const char * Form::GradeTooHighException::what ()const throw () 
{
      return "Grade Too High";      
}
const char * Form::GradeTooLowException::what () const throw () 
{
      return "Grade Too Low";
}
const char * Form::NotExection::what () const throw () 
{
      return "Grade in not enough for exection";
}
std::ostream& operator<< (std::ostream &cout ,const Form &F)
{
    cout << F.getName() << " grade sing is " << F.getGradeSing() << " grade execute is " << F.getGradeExe() << std::endl;
    return cout;
}