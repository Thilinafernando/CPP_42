/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:46:12 by tkurukul          #+#    #+#             */
/*   Updated: 2025/12/16 15:55:31 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int	main()
{
	std::vector<int>	v;

	v.push_back(4);
	v.push_back(2);
	v.push_back(1);
	v.push_back(6);
	v.push_back(7);
	v.push_back(9);

	try
	{
		easyfind(v, 6);
		easyfind(v, 0);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
