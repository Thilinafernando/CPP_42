/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:12:37 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/17 17:19:52 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <fstream>
# include <cmath>
# include <limits>

class Fixed
{
	private:
		int					num_val;
		static const int	fract_bits = 8;
	public:
		Fixed &operator=(const Fixed &another);
		bool operator>(const Fixed &another);
		bool operator<(const Fixed &another);
		bool operator>=(const Fixed &another);
		bool operator<=(const Fixed &another);
		bool operator==(const Fixed &another);
		bool operator!=(const Fixed &another);
		Fixed &operator+(const Fixed &another);
		Fixed &operator-(const Fixed &another);
		Fixed operator*(const Fixed &another);
		Fixed operator/(const Fixed &another);
		float operator++();
		float operator++(int);
		float operator--();
		float operator--(int);
		Fixed();
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed &another);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed&	min(Fixed &one, Fixed &another);
		static const Fixed&	min(const Fixed &one, const Fixed &another);
		static Fixed&	max(Fixed &one, Fixed &another);
		static const Fixed&	max(const Fixed &one, const Fixed &another);
};

std::ostream&	operator<< (std::ostream &stream, const Fixed &fixed);

#endif
