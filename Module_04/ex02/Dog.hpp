/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:46:56 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/12 17:19:15 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private :
        Brain *b;
    public :
        Dog();
        Dog(const Dog &a);
        Dog & operator=(const Dog &a);
        ~Dog();
        void makeSound() const ;
};

#endif