#include "Weapon.hpp"
#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(NULL){}

void HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with his PUGGGGGNI!!!!" << std::endl;	
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
