/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 20:43:36 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/20 22:34:30 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	x;
	x.printStatus();
	std::cout << std::endl;
	FragTrap	a("Pyscho");
	a.printStatus();
	std::cout << std::endl;
	FragTrap	b("Poop Train conductor");
	std::cout << std::endl;
	a.attack("Poop Train conductor");
	b.takeDamage(20);
	std::cout << std::endl;
	a.reduceEP(98);
	a.printStatus();
	std::cout << std::endl;
	a.attack("Poop Train conductor");
	a.attack("Poop Train conductor");
	std::cout << std::endl;
	a.highFivesGuys();
	std::cout << std::endl;
}
