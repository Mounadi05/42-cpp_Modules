#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Wp)
    : name(name), Wp(Wp)
{

}

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << Wp.getType() << std::endl;
}
