/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounadi05 <mounadi2015@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 01:18:51 by mounadi05         #+#    #+#             */
/*   Updated: 2022/08/21 01:18:52 by mounadi05        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
Base::~Base(){

}
Base * generate(void)
{
    Base *Ba = NULL;
    srand(time(0));
    if (rand() % 3 == 1)
        Ba = new A();
    else if (rand() % 3 == 2)
        Ba = new B();
    else
        Ba = new C();
    return Ba;
}
void identify(Base* p)
{
    Base *Ba;
    if ((Ba = dynamic_cast<A*>(p)))
        std::cout << "A" << std::endl;
    else if ((Ba = dynamic_cast<B*>(p)))
        std::cout << "B" << std::endl;
    else if ((Ba = dynamic_cast<C*>(p)))
        std::cout << "C" << std::endl;
    else
        std::cout << "this type is not exist " << std::endl;
}
void identify(Base& p)
{   
    Base Q;
    Base &Ba = Q;
    if (&p == nullptr)
        exit(1);
    try{
            Ba = dynamic_cast<A&>(p);
            std::cout << "A" << std::endl;
        }
        catch(std::bad_cast e)
        {
            try{
                Ba = dynamic_cast<B&>(p);
                std::cout << "B" << std::endl;
            }
            catch(std::bad_cast e)
            {
                try{
                    Ba = dynamic_cast<C&>(p);
                    std::cout << "C" << std::endl;
                }
                catch(std::bad_cast e){
                     std::cout << "this type is not exist " << std::endl;
                }
            }
           
        }
}
