/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 03:46:19 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/29 03:46:20 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP_
#define HUMANA_HPP_

#include "Weapon.hpp"

class HumanA {
    private :
        Weapon &Wp;
        std::string name;
    public :
        HumanA(std::string name, Weapon &Wp);
        void attack(void);
};

#endif