/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:46:41 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/12 16:05:47 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
#define CAT_HPP_
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private :
        Brain * b;
    public :
        Cat();
        void makeSound() const ;
        Cat(const Cat &a);
        Cat & operator=(const Cat &a);
        ~Cat();
};

#endif