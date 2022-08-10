/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:55:43 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/09 21:02:13 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
    ScavTrap p("anass");
    p. guardGate();
    p.attack("enemy");
    p.takeDamage(100);
    p.attack("enemy");
    ScavTrap p1("mounadi");
    p1.guardGate();
    p1.attack("enemy");
    p1.beRepaired(10);
    p1.attack("enemy");
}