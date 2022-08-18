/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 03:42:36 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/18 04:53:35 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"
#include <iostream>
int main ()
{
    Intern someRandomIntern;
    
    Form* rrf;
    rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    std::cout << *rrf;
}