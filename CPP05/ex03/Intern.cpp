/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:20:48 by tkurukul          #+#    #+#             */
/*   Updated: 2025/11/03 16:12:27 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


AForm*	newRobot(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm*	newBush(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm*	newPardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Intern::Intern()
{
	ptr[0] = newPardon;
	ptr[1] = newRobot;
	ptr[2] = newBush;
	std::cout << "Intern constructor has been called!" << std::endl;
}

Intern::Intern(const Intern& another)
{
	(void)another;
	std::cout << "Intern copy constructor has been called!" << std::endl;
}

Intern&	Intern::operator=(const Intern& another)
{
	(void)another;
	std::cout << "Intern copy assignment has been called!" << std::endl;
	return (*this);
}
Intern::~Intern()
{
	std::cout << "Intern Destructor has been called!" << std::endl;
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	std::string	list[3] = {"presidential pardon", "robotomy request", "Shrubbery creation"};
	for (int j = 0; j < 3; ++j)
	{
		if (!name.compare(list[j]))
		{
			std::cout << "Intern creates " << list[j] << std::endl;
			return ptr[j](target);
		}
	}
	std::cout << "Form does not exsist!" << std::endl;
	return (NULL);
}
