/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:48:32 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/12 18:33:21 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* j = new WrongCat();
    //const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    //std::cout << i->getType() << " " << std::endl;
   // i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete j;
    //delete i;
    delete meta;
    return 0;
}