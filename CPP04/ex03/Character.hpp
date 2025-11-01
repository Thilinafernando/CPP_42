/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:07:28 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/16 14:31:00 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

struct floor
{
	AMateria*	ptr;
	floor*	next;
};

class Character: public ICharacter
{
	private:
		AMateria*	materia[4];
		floor*	trash;
		std::string	name;
	public:
		Character();
		Character(std::string name);
		Character(const Character& another);
		Character& operator=(const Character& another);
		~Character();
		std::string const&	getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif
