#include "FragTrap.hpp"

FragTrap::FragTrap() 
{
	std::cout << "FragTrap default constructor called!\n";
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap name constructor called!\n";
	this->_name = name;
	this->_attackDamage = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
}

FragTrap::FragTrap(FragTrap const& src)
{
	std::cout << "FragTrap copy constructor called!\n";
	this->_name = src._name;
	this->_attackDamage = src._attackDamage;
	this->_energyPoints = src._energyPoints;
	this->_hitPoints = src._hitPoints;
}

FragTrap& FragTrap::operator=(FragTrap const& src)
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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called!\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is going to HIGH FIVE you!.\n";
}