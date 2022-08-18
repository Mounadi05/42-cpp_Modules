/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 03:42:40 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/17 21:16:44 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_
#include <iostream>
class Form;
class  Bureaucrat {
    private :
        const std::string name;
        int grade;
    public :
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &B);
    Bureaucrat & operator = (const Bureaucrat &B);
    ~Bureaucrat();
    std::string getName() const;
    int getGrade() const;
    void increment();
    void  decrement();
    void signForm(Form &F); 
    class GradeTooHighException : public std::exception
    {
        const char* what () const throw ();
    };
    class GradeTooLowException : public std::exception
    {
        const char* what () const throw ();
    };

};
std::ostream& operator<< (std::ostream &cout ,const Bureaucrat &B);

#endif 