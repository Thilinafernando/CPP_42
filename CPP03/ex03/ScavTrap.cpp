/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 21:32:34 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/23 13:27:00 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
:ClapTrap()
{
	std::cout << "Default ScavTrap constructor has been called!" << std::endl;
	hitpoints = hp;
	energypoints = ep;
	attackdamage = ad;
}

ScavTrap::ScavTrap(std::string name)
:ClapTrap(name)
{
	std::cout << "Parameterized ScavTrap constructor has been called!" << std::endl;
	hitpoints = 100;
	energypoints = 50;
	attackdamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &another)
{
	name = another.name;
	hitpoints = another.hitpoints;
	energypoints = another.energypoints;
	attackdamage = another.attackdamage;
	std::cout << "ScavTrap Copy constructor has been called!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &another)
{
	if (this != &another)
	{
		name = another.name;
		hitpoints = another.hitpoints;
		energypoints = another.energypoints;
		attackdamage = another.attackdamage;
		std::cout << "ScavTrap Copy assignment has been called!" << std::endl;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor has been called!" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
		if (hitpoints == 0)
	{
		std::cout << "ScavTrap " << name << " has passed away and cannot hurt anyone no more!" << std::endl;
		return ;
	}
	else if (energypoints == 0)
	{
		std::cout << "ScavTrap " << name << " has no energypoints left!" << std::endl;
		return ;
	}
	energypoints -= 1;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing "
	<< attackdamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap has initiated guard gate pose!" << std::endl;
}

void	ScavTrap::reduceEP(unsigned int points)
{
	std::cout << points << " Ep has been removed from " << name << std::endl;
	energypoints -= points;
}
