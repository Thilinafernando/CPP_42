/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:12:37 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/11 19:12:40 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <fstream>

class Fixed
{
	private:
		int					num_val;
		static const int	fract_bits = 8;
	public:
		Fixed &operator=(const Fixed &another);
		Fixed();
		Fixed(const Fixed &another);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
