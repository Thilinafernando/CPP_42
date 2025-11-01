/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:37:56 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/25 13:22:30 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
:Animal("Dog")
{
	std::cout << "Default Dog constructor has been called!" << std::endl;
	name = "unammed";
}

Dog::Dog(std::string name)
:Animal("Dog")
{
	std::cout << "Parameterized Dog constructor has been called!" << std::endl;
	this->name = name;
}

Dog::Dog(const Dog &another)
:Animal("Dog")
{
	std::cout << "Copy Dog constructor has been called!" << std::endl;
	this->name = another.name;
}

Dog&	Dog::operator=(const Dog &another)
{
	std::cout << "Copy assignment(Dog) has been called!" << std::endl;
	if (this != &another)
	{
		this->name = another.name;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor has been called!" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof woof!" << std::endl;
}
