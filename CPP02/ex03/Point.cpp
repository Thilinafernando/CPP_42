/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 17:17:25 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/22 13:35:30 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
:x(0), y(0)
{
}

Point::Point(float x, float y)
:x(x), y(y)
{
}

Point::Point(const Point &another)
:x(another.x), y(another.y)
{
}

Point&	Point::operator=(const Point &another)
{
	(void)another;
	std::cerr << "Reassignment of a const value not possible!" << std::endl;
	return (*this);
}

Point::~Point()
{
}

void	Point::printFloat()
{
	std::cout << "x value: " << this->x << std::endl;
	std::cout << "y value: " << this->y << std::endl;
}

float	Point::getX() const
{
	return (x.toFloat());
}

float	Point::getY() const
{
	return (y.toFloat());
}
