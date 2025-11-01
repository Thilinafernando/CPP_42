/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 20:31:13 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/11 16:32:32 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include <sstream>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(std::string type);
		const std::string	&getType(void);
		void		setType(std::string type);
};

#endif
