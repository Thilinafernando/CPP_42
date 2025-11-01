/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 20:38:36 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/06 21:31:46 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}
const std::string	&Weapon::getType(void)
{
	const std::string	&refType = this->type;
	return (refType);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
