/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:38:13 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/12 16:38:14 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_

#include <iostream>

class WrongAnimal{
protected :
    std::string type;
public :
    WrongAnimal();
    void makeSound() const ;
    const std::string & getType() const;
    WrongAnimal(const WrongAnimal &a);
    WrongAnimal & operator=(const WrongAnimal &a);
    ~WrongAnimal(); 
};

#endif