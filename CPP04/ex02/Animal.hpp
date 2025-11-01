/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:29:12 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/29 17:31:43 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(std::string	type);
		Animal(const Animal &another);
		Animal&	operator=(const Animal &another);
		virtual ~Animal();
		virtual void	makeSound() const = 0;
		std::string	getType() const;
};

#endif
