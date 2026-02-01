/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:10:06 by tkurukul          #+#    #+#             */
/*   Updated: 2025/12/16 19:24:53 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>

int	main()
{
	srand(time(NULL));
	Span	a(5);

	try
	{
		a.addNumber(1);
		a.addNumber(6);
		a.addNumber(10);
		a.addNumber(100);
		a.addNumber(1000);
		a.addNumber(-1);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Shortest span: " << a.shortestSpan() << std::endl;
		std::cout << "Longest span: " << a.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Testing 10000 numbers using external container and rand to randomize numbers." << std::endl;
	std::cout << std::endl;
	Span	b(10000);
	try
	{
		b.addNumber(1);
		std::vector<int>	vec;
		for (int i = 0; i < 9999; i++)
		{
			vec.push_back(rand());
		}
		b.addcont(vec.begin(), vec.end());
		std::cout << "Size of Vector: " << b.sizeofVector() << std::endl;
		std::cout << "Shortest span: " << b.shortestSpan() << std::endl;
		std::cout << "Longest span: " << b.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
