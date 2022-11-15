#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
	std::cout << "ScavTrap default constructor called!\n";
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap name constructor called!\n";
	this->_name = name;
	this->_attackDamage = 20;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
}

ScavTrap::ScavTrap(ScavTrap const& src)
{
	std::cout << "ScavTrap copy constructor called!\n";
	this->_name = src._name;
	this->_attackDamage = src._attackDamage;
	this->_energyPoints = src._energyPoints;
	this->_hitPoints = src._hitPoints;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& src)
{
	if (this != &src)
	{
		this->_name = src.getName();
		this->_attackDamage = src.getAttackDamage();
		this->_energyPoints = src.getEnergyPoints();
		this->_hitPoints = src.getHitPoints();
		return *this;
	}
	else
		return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap  destructor called!\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode.\n";
}