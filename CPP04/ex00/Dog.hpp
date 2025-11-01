/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:38:02 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/25 13:22:18 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog
:public Animal
{
	private:
		std::string	name;
	public:
		Dog();
		Dog(std::string name);
		Dog(const Dog &another);
		Dog& operator=(const Dog &another);
		~Dog();
		void	makeSound() const;
};

#endif
