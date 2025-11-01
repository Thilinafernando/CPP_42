/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:12:37 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/29 14:39:17 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <fstream>
# include <cmath>

class Fixed
{
	private:
		int					num_val;
		static const int	fract_bits = 8;
	public:
		Fixed &operator=(const Fixed &another);
		Fixed();
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed &another);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream &stream, const Fixed &fixed);

#endif
