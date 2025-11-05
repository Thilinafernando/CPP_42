/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 21:22:03 by tkurukul          #+#    #+#             */
/*   Updated: 2025/11/05 21:31:16 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

int	A::getInt() const
{
	return (a);
}

void	A::setInt(int nbr)
{
	a = nbr;
}

std::ostream&	operator<<(std::ostream& stream, const A& another)
{
	stream << another.getInt();
	return (stream);
}
