/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:36:51 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/23 13:29:05 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
:ClapTrap("unnammed_clap_name")
{
	std::cout << "Default DiamondTrap constructor has been called!" << std::endl;
	name = ClapTrap::name.substr(0,8);
	hitpoints = FragTrap::hp;
	energypoints = ScavTrap::ep;
	attackdamage = FragTrap::ad;
	// std::cout << FragTrap::attackdamage << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
:ClapTrap(name + "_clap_name")
{
	std::cout << "Parameterized DiamondTrap constructor has been called!" << std::endl;
	this->name = name;
	hitpoints = FragTrap::hp;
	energypoints = ScavTrap::ep;
	attackdamage = FragTrap::ad;
}

DiamondTrap::DiamondTrap(const DiamondTrap &another)
{
	name = another.name;
	hitpoints = another.hitpoints;
	energypoints = another.energypoints;
	attackdamage = another.attackdamage;
	std::cout << "DiamondTrap Copy constructor has been called!" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &another)
{
	if (this != &another)
	{
		name = another.name;
		hitpoints = another.hitpoints;
		energypoints = another.energypoints;
		attackdamage = another.attackdamage;
		std::cout << "DiamondTrap Copy assignment has been called!" << std::endl;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor has been called!" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is: " << name << " and my ClapTrap is " << ClapTrap::name << std::endl;
}

void	DiamondTrap::printStatus()
{
	std::cout << "Name:" << name << std::endl;
	std::cout << "Current hp:" << hitpoints << std::endl;
	std::cout << "Current energy points:" << energypoints << std::endl;
	std::cout << "Attack damage:" << attackdamage << std::endl;
}
