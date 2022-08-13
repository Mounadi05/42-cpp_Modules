/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:27:48 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/12 14:16:01 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_
#include "Animal.hpp"

class Dog : public Animal{
    public :
        Dog();
        Dog(const Dog &a);
        Dog & operator=(const Dog &a);
        ~Dog();
        void makeSound() const ;
};

#endif