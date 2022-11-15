#include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor called!\n";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character name constructor called!\n";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
}
Character::Character(Character const& src)
{
	std::cout << "Character copy constructor called!\n";
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = src._inventory[i];
	this->_name = src._name;
}

Character& Character::operator=(Character const& src)
{
	this->_name = src._name;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = src._inventory[i];
	return *this;
}

Character::~Character()
{
	std::cout << "Character destructor called!\n";
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

std::string const& Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << this->_name << ": Cannot equip nothing!\n";
		return ;
	}
	int i = 0;
	while(i != 4)
	{
		if (this->_inventory[i] == 0)
		{
			this->_inventory[i] = m;
			std::cout << this->_name << " equiped with " << m->getType() << std::endl;
			return;
		}
		i++;
	}
	if (i == 4)
		std::cout << "Invertory is full!\n";
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 4)
		std::cout << "There is no such index in the invertory!\n";
	else if (this->_inventory[idx] == 0)
		std::cout << "This slot is already empty!\n";
	else
	{
		AMateria* ptr = this->_inventory[idx];
		this->_inventory[idx] = 0;
		std::cout << this->_name << " unequiped " << ptr->getType() << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 4)
		std::cout << this->_name << ": does not have slot with such index!\n";
	else if (this->_inventory[idx] == 0)
		std::cout << this->_name << ": this slot is empty!\n";
	else
	{
		std::cout << this->_name;
		this->_inventory[idx]->use(target);
	}
}