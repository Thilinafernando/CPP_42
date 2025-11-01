/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 20:10:19 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/30 15:14:36 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
:name("unnamed"), hitpoints(10), energypoints(10), attackdamage(0)
{
	std::cout << "Default ClapTrap constructor has been called with the name " << name << std::endl;
}

ClapTrap::ClapTrap(std::string name)
:name(name), hitpoints(10), energypoints(10), attackdamage(0)
{
	std::cout << "Parameterized ClapTrap constructor has been called with the name " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &another)
:name(another.name), hitpoints(another.hitpoints),
energypoints(another.energypoints), attackdamage(another.attackdamage)
{
	std::cout << "Copy ClapTrap constructor has been called!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &another)
{
	if (this != &another)
	{
		name = another.name;
		hitpoints = another.hitpoints;
		energypoints = another.energypoints;
		attackdamage = another.attackdamage;
		std::cout << "Copy ClapTrap assignment has been called!" << std::endl;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor of "<< name <<" has been called!" << std::endl;
}

void	ClapTrap::attack(const std::string	&target)
{
	if (hitpoints == 0)
	{
		std::cout << "ClapTrap " << name << " has passed away and cannot hurt anyone no more!" << std::endl;
		return ;
	}
	else if (energypoints == 0)
	{
		std::cout << "ClapTrap " << name << " has no energypoints left!" << std::endl;
		return ;
	}
	energypoints -= 1;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
	<< attackdamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitpoints == 0)
	{
		std::cout << name << " has passed away and cannot be attacked anymore :C!" << std::endl;
		return ;
	}
	if (amount > hitpoints)
		hitpoints = 0;
	else
		hitpoints -= amount;
	std::cout << name << " has taken "
	<< amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitpoints == 0)
	{
		std::cout << name << " has passed away and cannot be repaired!" << std::endl;
		return ;
	}
	else if (energypoints == 0)
	{
		std::cout << name << " has no energypoints left!" << std::endl;
		return ;
	}
	energypoints -= 1;
	hitpoints += amount;
	std::cout << name << " has repaired "
	<< amount << " points of health!" << std::endl;
}

void	ClapTrap::printStatus()
{
	std::cout << "Name:" << name << std::endl;
	std::cout << "Current hp:" << hitpoints << std::endl;
	std::cout << "Current energy points:" << energypoints << std::endl;
	std::cout << "Attack damage:" << attackdamage << std::endl;
}
