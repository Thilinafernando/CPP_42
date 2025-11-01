/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 16:47:39 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/19 14:26:03 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
: pos(0)
{
	std::cout << "Brain Default constructor called!" << std::endl;
}

Brain::Brain(std::string *ideas, std::size_t size_array)
: pos(0)
{
	std::cout << "Brain Parameterized constructor called!" << std::endl;
	for(size_t i = 0; i < size_array && i < 100; i++)
	{
		this->ideas[i] = ideas[i];
		pos = i;
	}
}

void	Brain::giveIdeas(std::string *ideas, std::size_t size_array)
{
	for(size_t i = 0; i < size_array && i < 100 && pos < 100; i++)
		this->ideas[pos++] = ideas[i];
}

void	Brain::printIdeas()
{
	for (int i = 0; i < pos && i < 100; i++)
		std::cout << ideas[i] << std::endl;
}

Brain::Brain(const Brain &another)
: pos(0)
{
	std::cout << "Brain copy constructor called!" << std::endl;
	for(int i = 0; i < 100; i++)
		ideas[i] = another.ideas[i];
	pos = another.pos;
}

Brain&	Brain::operator=(const Brain &another)
{
	if (this != &another)
	{
		for(int i = 0; i < 100; i++)
			ideas[i] = another.ideas[i];
		pos = another.pos;
		std::cout << "Brain copy assignment called!" << std::endl;
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called!" << std::endl;
}
