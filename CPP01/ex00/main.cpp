/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:20:39 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/05 19:52:56 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*tmp;
	std::string	name;

	std::cout << "How do you want to name your newZombie?" << std::endl;
	std::getline(std::cin, name);
	tmp = newZombie(name);
	delete tmp;
	std::cout << "Name a zombie that loves brains(randomChump)!" << std::endl;
	std::getline(std::cin, name);
	randomChump(name);
	return (0);
}
