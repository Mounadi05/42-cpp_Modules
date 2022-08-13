/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:47:10 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/12 18:57:07 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();;
    // delete j;//should not create a leak
    // delete i;
    // while(1);
    Animal *list[6];
    for (size_t i = 0; i < 6; i++)
    {
        if (i % 2)
        {
            list[i] = new Cat();
            list[i]->makeSound();
        }
        else
        {
            list[i] = new Dog();
            list[i]->makeSound();
        }
    }
    for (int i = 0; i < 6 ; i++)
        delete list[i];
    return 0;
}
