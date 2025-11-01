/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 20:43:36 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/20 20:56:00 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a;
	ClapTrap	b("Psycho");
	ClapTrap	c(b);

	std::cout << std::endl;
	b.attack("Himself");
	c.takeDamage(10);
	std::cout << std::endl;
	c.takeDamage(10);
	c.attack("Psycho");
	c.beRepaired(10);
	std::cout << std::endl;
	a = c;
	a.printStatus();
}
