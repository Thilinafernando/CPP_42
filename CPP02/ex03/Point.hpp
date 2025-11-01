/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 17:19:35 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/22 13:32:54 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <fstream>
# include <cmath>
# include <limits>
# include "Fixed.hpp"

class Point
{
	private:
		Fixed const	x;
		Fixed const	y;
	public:
		Point();
		Point(float x, float y);
		Point(const Point &another);
		Point& operator=(const Point &another);
		~Point();
		float	getX(void) const;
		float	getY(void) const;
		void	printFloat();
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
