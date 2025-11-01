/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 19:39:38 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/25 15:24:27 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	karen;
	std::string	input;

	std::cout << "What do you want Harl to do? Or EXIT to exit" << std::endl;
	while (getline(std::cin, input))
	{
		if (!input.compare("EXIT"))
		break ;
		karen.complain(input);
		std::cout << "What do you want Harl to do? Or EXIT to exit" << std::endl;
	}
}
