/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 20:43:36 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/30 15:08:09 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	x;
	x.printStatus();
	x.whoAmI();
	std::cout << std::endl;
	DiamondTrap	a("Pyscho");
	a.whoAmI();
	a.printStatus();
	std::cout << std::endl;
	DiamondTrap	b("Poop Train conductor");
	std::cout << std::endl;
	a.attack("Poop Train conductor");
	b.takeDamage(20);
	std::cout << std::endl;
	a.printStatus();
	std::cout << std::endl;
	a.attack("Poop Train conductor");
	a.attack("Poop Train conductor");
	std::cout << std::endl;
	a.highFivesGuys();
	a.guardGate();
	std::cout << std::endl;
}
