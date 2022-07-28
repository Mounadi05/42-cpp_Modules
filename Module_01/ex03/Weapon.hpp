#ifndef WEAPON_HPP_
#define WEAPON_HPP_

#include <iostream>
class Weapon{
    private:
        std::string type;
    public :
        Weapon();
        Weapon(std::string type);
        const  std::string & getType () const ;
        void  setType(const std::string &type);
        
};

#endif