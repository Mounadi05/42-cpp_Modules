/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:58:03 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/11 06:07:22 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

#include "ClapTrap.hpp"
class FragTrap : virtual public ClapTrap {

public :
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &st);
    FragTrap& operator= (const FragTrap &st);
    void highFivesGuys(void);
    void attack(const std::string& target);
     
    ~FragTrap();
private :
    std::string name;   
};

#endif