/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 12:52:46 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/22 13:27:17 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "cmath"

float	area(Point const a, Point const b, Point const c)
{
	float	result;

	result = std::abs((a.getX()*(b.getY()- c.getY()) + b.getX()*(c.getY() - a.getY()) + c.getX()*(a.getY() - b.getY()))/2.0);
	return (result);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	// the triangle ABC
	float	a0 = area(a, b, c);
	// split the triangle from the point
	float	a1 = area(point, b, c);
	float	a2 = area(point, a, c);
	float	a3 = area(point, a, b);
	// check if the sum of split triangles add up to the whole area
	return (a0 == a1 + a2 + a3);
}
