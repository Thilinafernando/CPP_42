/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:20:39 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/06 19:28:28 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	// Zombie	*tmp;
	int		index;
	std::string	name;
	std::string	num;
	Zombie	*horde;

	std::cout << "How do you want to name your Zombie horde?" << std::endl;
	std::getline(std::cin, name);
	std::cout << "How many?" << std::endl;
	std::getline(std::cin, num);
	std::stringstream test(num);
	test >> index;
	horde = zombieHorde(index, name);
	delete[] horde; // deletes an array
	// tmp = newZombie(name);
	// delete tmp;
	// std::cout << "Name a zombie that loves brains(randomChump)!" << std::endl;
	// std::getline(std::cin, name);
	// randomChump(name);
	return (0);
}
