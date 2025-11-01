/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:13:37 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/22 13:38:34 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main( void )
{
	Point	a(3, 2);
	Point	b(4, 6);
	Point	c(0, 5);
	Point	p(2.25, 3);

	if (bsp(a, b, c, p))
		std::cout << "Inside" << std::endl;
	else
		std::cout << "Outside" << std::endl;
	return (0);
}
