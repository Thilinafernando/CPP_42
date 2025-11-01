/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:23:35 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/15 18:45:53 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	type = "unammed";
	std::cout << "AMateria Default Constructor has been called!" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	std::cout << "AMateria Parameterized Constructor has been called!" << std::endl;
}

AMateria::AMateria(const AMateria& another)
{
	this->type = another.type;
	std::cout << "AMateria Copy Constructor has been called!" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& another)
{
	(void)another;
	std::cout << "AMateria Copy Assignment does not work!" << std::endl;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor has been called!" << std::endl;
}

std::string const&	AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "AMateria use member function has no use!" << std::endl;
}
