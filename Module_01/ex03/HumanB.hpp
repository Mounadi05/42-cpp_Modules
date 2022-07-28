#ifndef HUMANB_HPP_
#define HUMANB_HPP_

#include "Weapon.hpp"

class HumanB {
    private :
        Weapon *Wp;
        std::string name;
    public :
        HumanB(std::string name);
        void setWeapon( Weapon &Wp);
        void attack(void);
};

#endif