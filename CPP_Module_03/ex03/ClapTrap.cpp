#include "ClapTrap.hpp"

/* CONSTRUCTORS */

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called!\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "ClapTrap name constructor called!\n";
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
	std::cout << "ClapTrap copy constructor called!\n";
	this->_name = src._name;
	this->_attackDamage = src._attackDamage;
	this->_energyPoints = src._energyPoints;
	this->_hitPoints = src._hitPoints;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& src)
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

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called!\n";
}

/* MEMBER FUNCTIONS*/

void ClapTrap::attack(const std::string& name)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacked " << name << ", causing " << this->_attackDamage << " points of damage!\n";
		this->_energyPoints -= this->_attackDamage;
	}
	else if (this->_energyPoints <= 0 && this->_hitPoints > 0)
		std::cout << "ClapTrap " << this->_name << " is out of energy points!\n";
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < 0)
		std::cout << "ClapTrap " << this->_name << " is dead!\n";
	else
		this->_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints < 0)
		;
	else if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		if ((signed)amount <= this->_energyPoints)
		{	
			std::cout << "ClapTrap " << this->_name << " repaider himself at " << amount << " points!\n";
			this->_hitPoints += amount;
		}
		else
			std::cout << "ClapTrap " << this->_name << " doesn't have so much energy points!\n";
	}
}

std::string ClapTrap::getName() const
{
	return this->_name;	
}

int ClapTrap::getAttackDamage(void) const
{
	return this->_attackDamage;
}

int	ClapTrap::getEnergyPoints(void) const
{
	return this->_energyPoints;
}

int	ClapTrap::getHitPoints(void) const
{
	return this->_hitPoints;
}
