/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 20:43:36 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/20 22:09:07 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	x;
	x.printStatus();
	std::cout << std::endl;
	ScavTrap	a("Pyscho");
	a.printStatus();
	std::cout << std::endl;
	ScavTrap	b("Poop Train conductor");
	std::cout << std::endl;
	a.attack("Poop Train conductor");
	b.takeDamage(20);
	std::cout << std::endl;
	a.reduceEP(48);
	a.printStatus();
	std::cout << std::endl;
	a.attack("Poop Train conductor");
	a.attack("Poop Train conductor");
	std::cout << std::endl;
	a.guardGate();
	std::cout << std::endl;
}
