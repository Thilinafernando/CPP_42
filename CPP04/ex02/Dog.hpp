/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:38:02 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/19 14:30:55 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog
:public Animal
{
	private:
		std::string	name;
		Brain	*brain;
	public:
		Dog();
		Dog(std::string name);
		Dog(const Dog &another);
		Dog& operator=(const Dog &another);
		~Dog();
		Brain&	showBrain() const;
		void	makeSound() const;
};

#endif
