/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:37:56 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/19 14:31:15 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
:Animal("Dog")
{
	Brain	*n = new Brain();
	brain = n;
	std::cout << "Default Dog constructor has been called!" << std::endl;
	name = "unammed";
}

Dog::Dog(std::string name)
:Animal("Dog")
{
	Brain	*n = new Brain();
	brain = n;
	std::cout << "Parameterized Dog constructor has been called!" << std::endl;
	this->name = name;
}

Dog::Dog(const Dog &another)
:Animal("Dog")
{
	std::cout << "Copy Dog constructor has been called!" << std::endl;
	this->name = another.name;
	this->brain = new Brain(*(another.brain));
}

Dog&	Dog::operator=(const Dog &another)
{
	std::cout << "Copy assignment(Dog) has been called!" << std::endl;
	if (this != &another)
	{
		this->name = another.name;
		if (this->brain && another.brain)
			*(this->brain) = *(another.brain);
		else
			this->brain = new Brain(*(another.brain));
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor has been called!" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof woof!" << std::endl;
}

Brain&	Dog::showBrain() const
{
	return (*brain);
}
