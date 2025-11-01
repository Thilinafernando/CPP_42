/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 22:26:42 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/30 15:04:22 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
:ClapTrap()
{
	std::cout << "Default FragTrap constructor has been called!" << std::endl;
	hitpoints = 100;
	energypoints = 100;
	attackdamage = 30;
}

FragTrap::FragTrap(std::string name)
:ClapTrap(name)
{
	std::cout << "Parameterized FragTrap constructor has been called!" << std::endl;
	hitpoints = 100;
	energypoints = 100;
	attackdamage = 30;
}

FragTrap::FragTrap(const FragTrap &another)
{
	name = another.name;
	hitpoints = another.hitpoints;
	energypoints = another.energypoints;
	attackdamage = another.attackdamage;
	std::cout << "FragTrap Copy constructor has been called!" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap &another)
{
	if (this != &another)
	{
		name = another.name;
		hitpoints = another.hitpoints;
		energypoints = another.energypoints;
		attackdamage = another.attackdamage;
		std::cout << "FragTrap Copy assignment has been called!" << std::endl;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor has been called!" << std::endl;
}

void	FragTrap::reduceEP(unsigned int points)
{
	std::cout << points << " Ep has been removed from " << name << std::endl;
	energypoints -= points;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "(≧ω≦)人(≧ω≦)" << std::endl;
}

void	FragTrap::printStatus()
{
	std::cout << "Name:" << name << std::endl;
	std::cout << "Current hp:" << hitpoints << std::endl;
	std::cout << "Current energy points:" << energypoints << std::endl;
	std::cout << "Attack damage:" << attackdamage << std::endl;
}
