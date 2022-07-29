/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 03:47:09 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/29 03:47:10 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP_
#define WEAPON_HPP_

#include <iostream>
class Weapon{
    private:
        std::string type;
    public :
        Weapon();
        Weapon(std::string type);
        const  std::string & getType () const ;
        void  setType(const std::string &type);
        
};

#endif