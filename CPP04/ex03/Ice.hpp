/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:59:30 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/16 14:36:43 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
	private:

	public:
		Ice();
		Ice(const Ice& another);
		Ice& operator=(const Ice& another);
		~Ice();
		AMateria*	clone() const;
		void	use(ICharacter& target);
};

#endif
