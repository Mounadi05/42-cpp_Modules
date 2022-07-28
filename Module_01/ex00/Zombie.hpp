/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:13:10 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/27 06:06:29 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP_
#define ZOMBIE_HPP_

# include <iostream>
class Zombie
{
    private :
        std::string name ;
    
    public :
        Zombie();
        ~Zombie();
        std::string& GetName(void);
        void SetName(const std::string &name);
        void announce( void );
         
};

 Zombie* newZombie( std::string name );
 void randomChump( std::string name );

#endif