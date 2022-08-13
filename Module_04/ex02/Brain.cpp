/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:54:40 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/12 17:26:08 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}
Brain::Brain(const Brain &b)
{
    *this = b;
}
Brain & Brain::operator=(const Brain &b)
{
    for(int i= 0; i < 100; i++)
        this->ideas[i] = b.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}