#include <iostream>
#include "PhoneBook.hpp"

Phonebook::Phonebook(void) 
{
	std::cout << "Phonebook was created" << endl;
	return;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Phonebook was deleted" << endl; 
}

Contact Phonebook::getContact(int index)
{
	return this->_contacts[index];
}

void	Phonebook::setFilled(int n)
{
	this->_filled = n;
}

int		Phonebook::getFilled(void)
{
	return this->_filled;
}

void	Phonebook::addContact(int index)
{
	string temp;

	std::cout << "INPUT FIRST NAME: ";
	std::cin >> temp;
	this->_contacts[index].setFirstName(temp);
	std::cout << "INPUT LAST NAME: ";
	std::cin >> temp;
	this->_contacts[index].setLastName(temp);
	std::cout << "INPUT NICKNAME: ";
	std::cin >> temp;
	this->_contacts[index].setNickname(temp);
	std::cout << "INPUT PHONE: ";
	std::cin >> temp;
	this->_contacts[index].setPhone(temp);
	std::cout << "INPUT DARKEST SECRET: ";
	std::cin >> temp;
	this->_contacts[index].setDarkestSecret(temp);
}

void	Phonebook::searchContact(int index)
{
	int	i = 0;
	int	id;

	if (index == 0)
	{
		std::cout << "THERE IS NO CONTACTS YET!\n";
		return ;
	}
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|     PHONE|\n";
	std::cout << "|----------|----------|----------|----------|----------|\n";
	while(i < index)
	{
		std::cout << "|";
		std::cout.width(10);
		std::cout << i + 1 << right << "|";
		std::cout.width(10);
		printField(this->_contacts[i].getFirstName());
		std::cout.width(10);
		printField(this->_contacts[i].getLastName());
		std::cout.width(10);
		printField(this->_contacts[i].getNickname());
		std::cout.width(10);
		printField(this->_contacts[i].getPhone());
		std::cout << endl;
		i++;
	}
	std::cout << "|----------|----------|----------|----------|----------|\n";
	while (1)
	{
		std::cout << "INPUT INDEX (1-8): ";
		std::cin >> id;
		if (!cin || id > 8 || id < 1)
		{
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			std::cout << "WRONG INDEX!\n";
			continue;
		}
		else
		{
			if (id > index)
			{
				std::cout << "NO SUCH INDEX YET!\n";
				continue;
			}
			else
			{
				printChosenContact(id);
				return ;
			}
		}
	}
}

void	Phonebook::printField(string line)
{
	if (line.length() > 10)
		std::cout << line.substr(0, 9) + ".|";
	else
		std::cout << line << right << "|";
}

void	Phonebook::printChosenContact(int id)
{
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|     PHONE|\n";
	std::cout << "|----------|----------|----------|----------|----------|\n|";
	std::cout.width(10);
	std::cout << id << right << "|";
	std::cout.width(10);
	printField(this->_contacts[id - 1].getFirstName());
	std::cout.width(10);
	printField(this->_contacts[id - 1].getLastName());
	std::cout.width(10);
	printField(this->_contacts[id - 1].getNickname());
	std::cout.width(10);
	printField(this->_contacts[id - 1].getPhone());
	std::cout << endl;
	std::cout << "|----------|----------|----------|----------|----------|\n";
}