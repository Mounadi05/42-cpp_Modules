/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:57:56 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/09 20:59:01 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

# include <iostream>

class ClapTrap{
protected :
    std::string name;
    int hp;
    int ep;
    int ad;

public :
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &cl);
    ClapTrap & operator= (const ClapTrap & cl);
    ~ClapTrap();
    void highFivesGuys(void);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
#endif