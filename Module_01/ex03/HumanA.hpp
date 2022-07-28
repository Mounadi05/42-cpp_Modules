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