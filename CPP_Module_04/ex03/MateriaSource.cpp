#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called!\n";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const& src)
{
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = src._inventory[i];
}

MateriaSource& MateriaSource::operator=(MateriaSource const& src)
{
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = src._inventory[i];
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called!\n";
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
	{
		std::cout << "Cannot learn nothing!\n";
		return ;
	}
	int i = 0;
	while(i != 4)
	{
		if (this->_inventory[i] == 0)
		{
			this->_inventory[i] = m;
			std::cout << "Learned " << m->getType() << " materia\n";
			return;
		}
		i++;
	}
	if (i == 4)
		std::cout << "Cannot learn more!\n";
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	int i = 0;

	while (i != 4 && this->_inventory[i] && this->_inventory[i]->getType() != type)
		i++;
	if (i == 4 || !(this->_inventory[i]))
	{
		std::cout << type << " materia does not exist\n";
		return (NULL);
	}
	std::cout << "Materia " << type << " created\n";
	return (this->_inventory[i]->clone());
}