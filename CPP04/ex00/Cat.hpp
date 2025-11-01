/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:43:52 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/25 13:22:10 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat
:public Animal
{
	private:
		std::string	name;
	public:
		Cat();
		Cat(std::string name);
		Cat(const Cat &another);
		Cat& operator=(const Cat &another);
		~Cat();
		void	makeSound() const;
};

#endif
