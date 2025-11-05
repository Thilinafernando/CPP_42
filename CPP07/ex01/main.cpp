/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:28:21 by tkurukul          #+#    #+#             */
/*   Updated: 2025/11/05 18:02:53 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	function(std::string& array)
{
	std::cout << array << std::endl;
}

int	function(int& array)
{
	std::cout << array << std::endl;
	return (1);
}

int	main( void )
{
	void (*func)(std::string&);
	int (*intfunct)(int&);
	func = function;
	intfunct = function;
	std::string	arr[3] =
	{
		"The ",
		"World ",
		"is over!"
	};
	int	list[3] = {1, 2, 3};
	::iter(arr, 3, func);
	std::cout << std::endl;
	size_t i = 3;
	::iter(list, i, intfunct);
	return (0);
}
