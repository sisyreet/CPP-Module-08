#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called!\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap name constructor called!\n";
	this->_attackDamage = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
}

FragTrap::FragTrap(FragTrap const& src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called!\n";
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

void FragTrap::attack(const std::string& name)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacked " << name << ", causing " << this->_attackDamage << " points of damage!\n";
		this->_energyPoints -= this->_attackDamage;
	}
	else if (this->_energyPoints <= 0 && this->_hitPoints > 0)
		std::cout << "FragTrap " << this->_name << " is out of energy points!\n";
	else if (this->_hitPoints <= 0)
		std::cout << "FragTrap " << this->_name << " is dead!\n";
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < 0)
		std::cout << "FragTrap " << this->_name << " is dead!\n";
	else
		this->_hitPoints -= amount;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints < 0)
		;
	else if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		if ((signed)amount <= this->_energyPoints)
		{	
			std::cout << "FragTrap " << this->_name << " repaider himself at " << amount << " points!\n";
			this->_hitPoints += amount;
		}
		else
			std::cout << "FragTrap " << this->_name << " doesn't have so much energy points!\n";
	}
}


void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is going to HIGH FIVE you! 🖐.\n";
}