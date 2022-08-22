/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:11:31 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/22 09:11:32 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.cpp"
template <typename T>
void print(T const & a)
{
    std::cout << a << std::endl;
}

int main ()
{
    std::string str[3] = {"hello", "world", "nothing"};
    int tab[10] = {5,3,6,8,9,20,53,13,10,9};
    iter(tab,10,print);
    iter(str,3,print);

}


 