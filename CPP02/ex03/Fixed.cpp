/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:40:19 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/29 17:44:34 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
: num_val(0)
{
}

Fixed::Fixed(const int val)
: num_val(val * (1 << fract_bits))
{
}

Fixed::Fixed(const float val)
:num_val(static_cast<int>(roundf( val * (1 << fract_bits))))
{
}

Fixed&	Fixed::operator=(const Fixed &another)
{
	if (this != &another)
	{
		num_val = another.getRawBits();
	}
	return (*this);
}

Fixed&	Fixed::operator+(const Fixed &another)
{
	num_val = num_val + another.num_val;
	return (*this);
}

Fixed&	Fixed::operator-(const Fixed &another)
{
	num_val = num_val - another.num_val;
	return (*this);
}

Fixed	Fixed::operator*(const Fixed &another)
{
	return Fixed((this->toFloat() * another.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &another)
{
	return Fixed(this->toFloat() / another.toFloat());
}

float Fixed::operator++()
{
	++num_val;
	return (this->toFloat());
}

float Fixed::operator++(int)
{
	int	tmp = num_val;
	num_val++;
	return (static_cast<float>(tmp) / (1 << fract_bits));
}

float Fixed::operator--()
{
	--num_val;
	return (this->toFloat());
}

float Fixed::operator--(int)
{
	int tmp = num_val;
	num_val--;
	return (static_cast<float>(tmp) / (1 << fract_bits));
}

bool	Fixed::operator>(const Fixed &another)
{
	if (num_val > another.num_val)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(const Fixed &another)
{
	if (num_val < another.num_val)
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(const Fixed &another)
{
	if (num_val >= another.num_val)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(const Fixed &another)
{
	if (num_val <= another.num_val)
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(const Fixed &another)
{
	if (num_val == another.num_val)
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(const Fixed &another)
{
	if (num_val != another.num_val)
		return (true);
	else
		return (false);
}

Fixed::Fixed(const Fixed &another)
{
	Fixed::operator=(another);
}

int	Fixed::getRawBits(void) const
{
	return (num_val);
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed& Fixed::min(Fixed &one, Fixed &another)
{
	if (one < another)
		return (one);
	return (another);
}

const Fixed& Fixed::min(const Fixed &one, const Fixed &another)
{
	if (one.num_val < another.num_val)
		return (one);
	return (another);
}

Fixed& Fixed::max(Fixed &one, Fixed &another)
{
	if (one > another)
		return (one);
	return (another);
}

const Fixed& Fixed::max(const Fixed &one, const Fixed &another)
{
	if (one.num_val > another.num_val)
		return (one);
	return (another);
}

Fixed::~Fixed()
{
}

std::ostream&	operator<<(std::ostream &stream, const Fixed& fixed)
{
	stream << fixed.toFloat();
	return (stream);
}
