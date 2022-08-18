/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:53:49 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/17 22:12:18 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP_
#define FORM_HPP_
#include <iostream>
class Bureaucrat;
class Form{
    private :
        const std::string name;
        bool s;
        const int grade_sing;
        const int grade_exe;
    public:
        Form(std::string name, int grade_sing, int grade_exe);
        Form(const Form &F);
        Form &operator=(const Form &F);
        ~Form();
        std::string getName() const;
        int getGradeSing() const;
        int getGradeExe() const;
        void beSigned(Bureaucrat &F);
        bool getS() const;
        class GradeTooHighException : public std::exception
        {
            const char* what () const throw ();
        };
        class GradeTooLowException : public std::exception
        {
            const char* what () const throw ();
        };
};
std::ostream & operator<< (std::ostream &cout , const Form &F);
#endif