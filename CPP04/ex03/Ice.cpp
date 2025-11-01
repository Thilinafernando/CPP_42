/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:35:47 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/17 12:12:22 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
:AMateria("ice")
{
	std::cout << "Ice default constructor has been called!" << std::endl;
}

Ice::Ice(const Ice& another)
:AMateria(another.getType())
{
	std::cout << "Ice Copy constructor has been called!" << std::endl;
}

Ice&	Ice::operator=(const Ice& another)
{
	(void)another;
	std::cout << "Ice Copy Assignment does not change anything!" << std::endl;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor has been called!" << std::endl;
}

AMateria*	Ice::clone() const
{
	AMateria	*clone = new Ice();
	std::cout << "Ice has been cloned!" << std::endl;
	return (clone);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "\033[32m* shoots an ice bolt at " << target.getName() << " *\033[0m" << std::endl;
}
