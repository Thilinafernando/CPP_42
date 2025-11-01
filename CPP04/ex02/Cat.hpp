/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:43:52 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/19 14:31:00 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat
:public Animal
{
	private:
		std::string	name;
		Brain	*brain;

	public:
		Cat();
		Cat(std::string name);
		Cat(const Cat &another);
		Cat& operator=(const Cat &another);
		~Cat();
		Brain&	showBrain() const;
		void	makeSound() const;
};

#endif
