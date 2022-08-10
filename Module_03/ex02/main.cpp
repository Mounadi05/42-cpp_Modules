/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:58:07 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/09 21:03:44 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ()
{
    FragTrap p("anass");
    p.highFivesGuys();
    p.attack("enemy");
    p.takeDamage(100);
    p.attack("enemy");
    p.beRepaired(10);
}