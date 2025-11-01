/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 20:22:10 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/30 16:16:39 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

Serializer::Serializer()
{}

Serializer::Serializer(const Serializer& another)
{
	(void)another;
}

Serializer& Serializer::operator=(const Serializer& another)
{
	(void)another;
	return (*this);
}

Serializer::~Serializer()
{}

uintptr_t	Serializer::serialize(Data* ptr)
{
	uintptr_t	tmp= reinterpret_cast<uintptr_t>(ptr);
	return (tmp);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
