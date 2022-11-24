#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called!\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called!\n";
	this->_attackDamage = 20;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
}

ScavTrap::ScavTrap(ScavTrap const& src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called!\n";
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
	std::cout << "ScavTrap destructor called!\n";
}

void ScavTrap::attack(const std::string& name)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacked " << name << ", causing " << this->_attackDamage << " points of damage!\n";
		this->_energyPoints -= this->_attackDamage;
	}
	else if (this->_energyPoints <= 0 && this->_hitPoints > 0)
		std::cout << "ScavTrap " << this->_name << " is out of energy points!\n";
	else if (this->_hitPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " is dead!\n";
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < 0)
		std::cout << "ScavTrap " << this->_name << " is dead!\n";
	else
		this->_hitPoints -= amount;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints < 0)
		;
	else if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		if ((signed)amount <= this->_energyPoints)
		{	
			std::cout << "ScavTrap " << this->_name << " repaider himself at " << amount << " points!\n";
			this->_hitPoints += amount;
		}
		else
			std::cout << "ScavTrap " << this->_name << " doesn't have so much energy points!\n";
	}
}


void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode.\n";
}