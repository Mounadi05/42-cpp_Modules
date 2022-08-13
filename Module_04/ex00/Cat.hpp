/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:27:43 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/12 14:26:53 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
#define CAT_HPP_
#include "Animal.hpp"

class Cat : public Animal{
    public :
        Cat();
        void makeSound() const ;
        Cat(const Cat &a);
        Cat & operator=(const Cat &a);
        ~Cat();
};

#endif