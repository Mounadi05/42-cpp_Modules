/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 03:51:13 by mounadi05         #+#    #+#             */
/*   Updated: 2022/07/29 03:51:15 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP_
#define PHONEBOOK_HPP_ 

# include <iostream>
# include <iomanip>
#include "Contact.hpp"
class PhoneBook{
    private :
        void PrintWithWidth(std::string str);
        std::string Check_Eof(std::string msg);
        void ShiftContact();
        void Affiche(int index);
    public :
        Contact contacts[8];
        void ADD(int i, int check);
        void SEARCH(int i);
        void EXIT(void);
};

#endif