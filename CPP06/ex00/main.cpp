/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:27:38 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/29 14:58:32 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "utils.hpp"

int	main(int argc, char** av)
{
	if (argc != 2)
	{
		std::cerr << "Invalid Input: example of input = ./program 'arg'" << std::endl;
		return (1);
	}
	return (ScalarConverter::convert(av[1]));
}
