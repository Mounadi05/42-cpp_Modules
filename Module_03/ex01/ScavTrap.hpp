/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:57:31 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/09 20:57:32 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap {

public :
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &st);
    ScavTrap& operator= (const ScavTrap &st);
    void guardGate();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ScavTrap();

};

#endif