/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 19:39:38 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/09 19:53:26 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	karen;
	std::string	input;

	if (ac != 2)
	{
		std::cerr << "One argument must be passed!" << std::endl;
		return (1);
	}
	void	(Harl::*ptr) (std::string) = &Harl::complain;
	input = av[1];
	(karen.*ptr) (input);
}
