#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA()
{
}

HumanA::HumanA(std::string name, Weapon& weaponType)
{
	this->_name = name;
	this->_weapon = &weaponType;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << '\n';
}
