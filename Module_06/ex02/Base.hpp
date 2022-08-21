/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 01:18:55 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/21 01:18:56 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP_
#define BASE_HPP_
#include <cstdlib>
#include <iostream>
class Base
{
    public :
        virtual ~Base();
};
Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif