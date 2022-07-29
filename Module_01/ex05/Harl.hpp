/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 08:09:04 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/29 08:09:05 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP_
#define HARL_HPP_

# include <iostream>

class Harl{
private :
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    int hash(std::string level);
public :
    void complain( std::string level );

};

#endif