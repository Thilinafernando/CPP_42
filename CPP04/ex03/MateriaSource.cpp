/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:56:26 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/17 12:23:55 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
# include "AMateria.hpp"

MateriaSource::MateriaSource()
:IMateriaSource()
{
	for (int i= 0; i < 4; i++)
		amateria[i] = NULL;
	std::cout << "Default Constructor of MateriaSource has been called!" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& another)
:IMateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (another.amateria[i])
			amateria[i] = another.amateria[i]->clone();
		else
			amateria[i] = NULL;
	}
	std::cout << "Copy Constructor of MateriaSource has been called!" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& another)
{
	if (this != &another)
	{
		for (int i = 0; i < 4; i++)
		{
			if (amateria[i])
				delete amateria[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (another.amateria[i])
				amateria[i] = another.amateria[i]->clone();
			else
				amateria[i] = NULL;
		}
		std::cout << "Copy Assignment of MateriaSource has been called!" << std::endl;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (amateria[i])
			delete amateria[i];
	}
	std::cout << "Destructor of MateriaSource has been called!" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* arcanogram)
{
	if (!arcanogram)
	{
		std::cout << "Arcanogram doesnt exisit!" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!amateria[i])
		{
			amateria[i] = arcanogram;
			return;
		}
	}
	delete arcanogram;
	std::cout << "\033[33mThis arcanogram cannot be learnt because the slots are full so i deleted it :D\033[0m" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (amateria[i] && !amateria[i]->getType().compare(type))
			return (amateria[i]->clone());
	}
	std::cout << "\033[31mThe arcanogram was not learnt!\033[0m" << std::endl;
	return (0);
}
