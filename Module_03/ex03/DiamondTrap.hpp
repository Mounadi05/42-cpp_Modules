#ifndef DIAMONDTRAP_HPP_
#define DIAMONDTRAP_HPP_

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
class DiamondTrap : public  ScavTrap, public FragTrap {
    private :
    std::string name;
    public :
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &D);
    DiamondTrap& operator=(const DiamondTrap &d);
    ~DiamondTrap();
    using ScavTrap::attack;


};

#endif