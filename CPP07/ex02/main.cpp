/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:08:29 by tkurukul          #+#    #+#             */
/*   Updated: 2025/11/05 21:29:08 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "A.hpp"

int	main()
{
	try
	{
		Array<int> one;
		Array<int> two(10);
		Array<std::string> three(2);
		Array<std::string> four(2);
		Array<A> five(2);
		Array<A> six(2);

		std::cout << one;
		two.setoneitemarray(5, 0);
		std::cout << two << std::endl;
		// std::cout << two[11] << std::endl;
		three.setoneitemarray("Hello", 0);
		three.setoneitemarray("World", 1);
		std::cout << three << std::endl;
		four = three;
		std::cout << four << std::endl;

		five[0].setInt(42);
		five[1].setInt(404);
		std::cout << five;
		six = five;
		std::cout << six;
	}
	catch (std::exception &e)
	{
		std::cerr << "Code has stopped because: "<< e.what() << std::endl;
	}
}
