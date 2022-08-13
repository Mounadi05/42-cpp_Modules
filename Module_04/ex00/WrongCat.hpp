/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:40:34 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/12 18:34:36 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP_
#define WRONGCAT_HPP_
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    public :
        WrongCat();
        void makeSound() const ;
        WrongCat(const WrongCat &a);
        WrongCat & operator=(const WrongCat &a);
        ~WrongCat();
};

#endif