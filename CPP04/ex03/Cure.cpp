/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:57:28 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/17 12:12:41 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
: AMateria("cure")
{
	std::cout << "Cure default constructor has been called!" << std::endl;
}

Cure::Cure(const Cure& another)
:AMateria(another.getType())
{
	std::cout << "Cure Copy constructor has been called!" << std::endl;
}

Cure&	Cure::operator=(const Cure& another)
{
	(void)another;
	std::cout << "Cure Copy Assignment does not change anything!!" << std::endl;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor has been called!" << std::endl;
}

AMateria*	Cure::clone() const
{
	AMateria	*clone = new Cure();
	std::cout << "Cure has been cloned!" << std::endl;
	return (clone);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "\033[32m* heals " << target.getName() << "’s wounds *\033[0m" << std::endl;
}
