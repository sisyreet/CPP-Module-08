/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisyreet <sisyreet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 23:32:58 by ldurante          #+#    #+#             */
/*   Updated: 2022/11/25 19:02:42 by sisyreet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("")
{
	for (int i = 0; i < 4; i++)
		m_inventory[i] = nullptr;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		m_inventory[i] = nullptr;
}

Character::Character(Character const &toCopy)
{
	for (int i = 0; i < 4; i++)
		this->m_inventory[i] = nullptr;
	*this = toCopy;
}

Character &Character::operator = (Character const &toCopy)
{
	this->_name = toCopy.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->m_inventory[i])
		{
			delete this->m_inventory[i];
			this->m_inventory[i] = nullptr;
			this->m_inventory[i] = toCopy.m_inventory[i]->clone();
		}
	}
	return *this;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	if (!m)
		return ;
	bool equipped = false;

	for (int i = 0; i < 4; i++)
	{
		if (m_inventory[i] == nullptr)
		{
			m_inventory[i] = m;
			equipped = true;
			std::cout << "Materia " << m->getType() << " equipped in inventory " << i << std::endl;
			return ;
		}
	}
	if (equipped == false)
		std::cout << "Inventory is full!" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->m_inventory[idx])
		{
			std::cout << "Materia " << m_inventory[idx]->getType() << " unequipped in inventory " << idx << std::endl;
			this->m_inventory[idx] = nullptr;
		}
		else
			std::cout << "Inventory " << idx << " is already empty" << std::endl;
	}
	else
		std::cout << "Wrong index to unequip" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->m_inventory[idx])
			this->m_inventory[idx]->use(target);
		else
		std::cout << "There's no materia equipped in inventory " << idx << std::endl;
	}
	else
		std::cout << "Index out of invertory!" << std::endl;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete m_inventory[i];
}
