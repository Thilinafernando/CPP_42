/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 13:13:34 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/25 13:38:33 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog()
:WrongAnimal("WrongDog")
{
	std::cout << "Default WrongDog constructor has been called!" << std::endl;
	name = "unammed";
}

WrongDog::WrongDog(std::string name)
:WrongAnimal("WrongDog")
{
	std::cout << "Parameterized WrongDog constructor has been called!" << std::endl;
	this->name = name;
}

WrongDog::WrongDog(const WrongDog &another)
:WrongAnimal("WrongDog")
{
	std::cout << "Copy WrongDog constructor has been called!" << std::endl;
	this->name = another.name;
}

WrongDog&	WrongDog::operator=(const WrongDog &another)
{
	std::cout << "Copy assignment(WrongDog) has been called!" << std::endl;
	if (this != &another)
	{
		this->name = another.name;
	}
	return (*this);
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destructor has been called!" << std::endl;
}

void	WrongDog::makeSound() const
{
	std::cout << "WrongWoof Wrongwoof!" << std::endl;
}
