/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:36:46 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/17 12:40:29 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
# include "AMateria.hpp"


Character::Character()
:ICharacter(), trash(NULL)
{
	name = "unnamed";
	for (size_t i = 0; i < 4; i++)
		materia[i] = NULL;
	std::cout << "Default Character constructor has been called with name " << name << std::endl;
}

Character::Character(std::string name)
:ICharacter(), trash(NULL)
{
	this->name = name;
	for (size_t i = 0; i < 4; i++)
		materia[i] = NULL;
	std::cout << "Parameterized Character constructor has been called with name " << name << std::endl;
}

Character::Character(const Character& another)
:ICharacter(), trash(NULL)
{
	for (int i = 0;i < 4; i++)
	{
		if (another.materia[i])
			this->materia[i] = another.materia[i]->clone();
		else
			this->materia[i] = NULL;
	}
	this->name = another.name;
	std::cout << "Copy Character constructor has been called!" << std::endl;
}

Character&	Character::operator=(const Character& another)
{
	if (this != &another)
	{
		for (size_t i = 0; i < 4; i++)
		{
			if (!materia[i])
				continue;
			delete materia[i];
		}
		for (int i=0;i < 4; i++)
		{
			if (another.materia[i])
				this->materia[i] = another.materia[i]->clone();
			else
				this->materia[i] = NULL;
		}
		while (trash)
		{
			floor*	tmp = trash;
			trash = trash->next;
			delete tmp->ptr;
			delete tmp;
		}
		std::cout << "\033[33mPrevious Trash has been deleted\033[0m" << std::endl;
		trash = NULL;
		this->name = another.name;
		std::cout << "Copy Character assignment has been called!" << std::endl;
	}
	return (*this);
}

Character::~Character()
{
	while (trash)
	{
		floor*	tmp = trash;
		trash = trash->next;
		delete tmp->ptr;
		delete tmp;
	}
	std::cout << "\033[33mTrash has been deleted of character " << this->getName() << "\033[0m"<< std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (!materia[i])
			continue;
		delete materia[i];
	}
	std::cout << "Character destructor has been called with name" << name << std::endl;
}

std::string const&	Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria* materia)
{
	if (!materia)
	{
		std::cout << "Materia doesnt exisit!" << std::endl;
		return ;
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->materia[i])
		{
			this->materia[i] = materia;
			std::cout << "Equipped " << this->materia[i]->getType() << " in the slot " << i << std::endl;
			return;
		}
	}
	delete materia;
	std::cout << "\033[33mMateria cannot be equipped so it is deleted!\033[0m" << std::endl;
}

void	Character::unequip(int idx)
{
	if (materia[idx])
	{
		floor* tmp = new floor;
		tmp->ptr = materia[idx];
		tmp->next = trash;
		trash = tmp;
		materia[idx] = NULL;
		std::cout << "\033[31mMateria is added to the floor as trash to later be deleted\033[0m" << std::endl;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (materia[idx])
		materia[idx]->use(target);
}
