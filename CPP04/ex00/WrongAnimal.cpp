/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 13:12:31 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/29 14:56:35 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructor has been called!" << std::endl;
	type = "Extinct";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "Parameterized WrongAnimal constructor has been called!" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &another)
{
	std::cout << "Copy WrongAnimal constructor has been called!" << std::endl;
	this->type = another.type;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &another)
{
	if (this != &another)
	{
		this->type = another.type;
		std::cout << "" << std::endl;\
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor has been called!" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "I don't know what sound this \"WrongAnimal\" makes..." << std::endl;
}
