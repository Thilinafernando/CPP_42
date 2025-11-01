/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:09:56 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/23 13:52:42 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*guy = new Zombie(name);
	return (guy);
}

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*guy = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		guy[i].setName(name);
		guy[i].announce();
	}
	return (guy);
}
