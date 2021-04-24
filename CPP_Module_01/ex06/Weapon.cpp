#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

std::string const & Weapon::getType (void)
{
	std::string const & ref = this->type;
	return (ref);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
