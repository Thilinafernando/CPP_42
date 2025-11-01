/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 20:58:12 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/23 13:28:02 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
	public:
		static const int	hp = 100;
		static const int	ep = 50;
		static const int	ad = 20;
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &another);
		ScavTrap& operator=(const ScavTrap &another);
		~ScavTrap();
		void	attack(const std::string &target);
		void	guardGate();
		void	reduceEP(unsigned int points);
};

#endif
