#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor called!\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap name constructor called!\n";
	this->_name = name;
	this->ClapTrap::_name = name.append("_clap_trap");
	this->_attackDamage = this->FragTrap::getAttackDamage();
	this->_energyPoints = this->ScavTrap::getEnergyPoints();
	this->_hitPoints = this->FragTrap::getHitPoints();
}

DiamondTrap::DiamondTrap(DiamondTrap const& src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap copy constructor called!\n";
	this->_name = src._name;
	this->ClapTrap::_name = this->_name.append("_clap_trap");
	this->_attackDamage = src._attackDamage;
	this->_energyPoints = src._energyPoints;
	this->_hitPoints = src._hitPoints;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& src)
{
	if (this != &src)
	{
		this->_name = src.FragTrap::getName();
		this->DiamondTrap::FragTrap::_attackDamage = src.DiamondTrap::FragTrap::getAttackDamage();
		this->ScavTrap::_energyPoints = src.ScavTrap::getEnergyPoints();
		this->FragTrap::_hitPoints = src.FragTrap::getHitPoints();
		return *this;
	}
	else
		return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called!\n";
}

void	DiamondTrap::attack(const std::string name)
{
	this->ScavTrap::attack(name);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << this->_name << std::endl;
	std::cout << this->ClapTrap::_name << std::endl;
}