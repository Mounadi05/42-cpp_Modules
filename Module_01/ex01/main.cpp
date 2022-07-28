/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 06:30:32 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/27 06:30:33 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
   Zombie *test;
    test = zombieHorde(5,"anass");
    for (int i = 0 ; i < 5 ; i++)
        test[i].announce();
    delete []test;
    while(1);
}

