/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:56:02 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/09 20:56:03 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
    ClapTrap p("anass");
    p.attack("enemy");
    p.takeDamage(10);
    p.attack("enemy");
    ClapTrap p1("mounadi");
    for(int i = 0; i <= 10 ;i++)
        p1.attack("enemy");
    p1.beRepaired(10);
    p1.attack("enemy");
}