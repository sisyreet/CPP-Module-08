#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called!\n";
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap name constructor called!\n";
	this->_name = name;
	this->ClapTrap::_name = name.append("_clap_trap");
	this->FragTrap::_attackDamage = 30;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_hitPoints = 100;
}

DiamondTrap::DiamondTrap(DiamondTrap const& src) : _name(src._name)
{
	std::cout << "DiamondTrap copy constructor called!\n";
	this->_attackDamage = src._attackDamage;
	this->_energyPoints = src._energyPoints;
	this->_hitPoints = src._hitPoints;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_attackDamage = src._attackDamage;
		this->_energyPoints = src._energyPoints;
		this->_hitPoints = src._hitPoints;
		return *this;
	}
	else
		return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called!\n";
}

// void	DiamondTrap::attack(const std::string name)
// {
// 	this->ScavTrap::attack(name);
// }

void DiamondTrap::whoAmI(void)
{
	std::cout << this->_name << std::endl;
	std::cout << this->ClapTrap::_name << std::endl;
}