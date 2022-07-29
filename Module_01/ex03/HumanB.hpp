/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 03:46:27 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/29 03:46:28 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP_
#define HUMANB_HPP_

#include "Weapon.hpp"

class HumanB {
    private :
        Weapon *Wp;
        std::string name;
    public :
        HumanB(std::string name);
        void setWeapon( Weapon &Wp);
        void attack(void);
};

#endif