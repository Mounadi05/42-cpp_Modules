#include "HumanB.hpp"

HumanB::HumanB(std::string name)
    : name(name)
{
    Wp = NULL;
}
void HumanB::setWeapon( Weapon &Wp)
{
    this->Wp = &Wp;
}

void HumanB::attack(void)
{
    if (Wp)
        std::cout << name << " attacks with their " << Wp->getType() << std::endl;
}