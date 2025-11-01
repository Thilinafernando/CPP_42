/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:42:43 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/29 14:56:54 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constructor has been called!" << std::endl;
	type = "Extinct";
}

Animal::Animal(std::string type)
{
	std::cout << "Parameterized Animal constructor has been called!" << std::endl;
	this->type = type;
}

Animal::Animal(const Animal &another)
{
	std::cout << "Copy Animal constructor has been called!" << std::endl;
	this->type = another.type;
}

Animal&	Animal::operator=(const Animal &another)
{
	if (this != &another)
	{
		this->type = another.type;
		std::cout << "Animal Copy assignment has been called!" << std::endl;\
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor has been called!" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "I don't know what sound this \"Animal\" makes..." << std::endl;
}
