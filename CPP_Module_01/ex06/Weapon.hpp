#pragma once
#include <string>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(void);
		Weapon(std::string type);
        std::string const &getType(void);
		void setType(std::string type);
};
