/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:06:42 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/16 14:36:39 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
	private:

	public:
		Cure();
		Cure(const Cure& another);
		Cure& operator=(const Cure& another);
		~Cure();
		AMateria*	clone() const;
		void	use(ICharacter& target);
};

#endif
