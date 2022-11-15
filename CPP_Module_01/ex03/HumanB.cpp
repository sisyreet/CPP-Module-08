#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon& weaponType)
{
	this->_weapon = &weaponType;
}

void	HumanB::attack()
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " attacks with their bare hands\n";
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << '\n';
}