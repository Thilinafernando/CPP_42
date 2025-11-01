/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:44:23 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/25 13:22:38 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
:Animal("Cat")
{
	std::cout << "Default Cat constructor has been called!" << std::endl;
	name = "unammed";
}

Cat::Cat(std::string name)
:Animal("Cat")
{
	std::cout << "Parameterized Cat constructor has been called!" << std::endl;
	this->name = name;
}

Cat::Cat(const Cat &another)
:Animal("Cat")
{
	std::cout << "Copy Cat constructor has been called!" << std::endl;
	this->name = another.name;
}

Cat&	Cat::operator=(const Cat &another)
{
	std::cout << "Copy assignment(Cat) has been called!" << std::endl;
	if (this != &another)
	{
		this->name = another.name;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called!" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow?" << std::endl;
}
