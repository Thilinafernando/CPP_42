/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:40:19 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/29 17:44:14 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
: num_val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val)
:num_val(val * (1 << fract_bits))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float val)
:num_val(static_cast<int>(roundf(val * (1 << fract_bits))))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &another)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &another)
	{
		num_val = another.getRawBits();
	}
	return (*this);
}

Fixed::Fixed(const Fixed &another)
{
	std::cout << "Copy constructor called" << std::endl;
	Fixed::operator=(another);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (num_val);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	num_val = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(num_val) / (1 << fract_bits));
}

int	Fixed::toInt(void) const
{
	return ((num_val / (1 << fract_bits)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream&	operator<<(std::ostream &stream, const Fixed& fixed)
{
	stream << fixed.toFloat();
	return (stream);
}
