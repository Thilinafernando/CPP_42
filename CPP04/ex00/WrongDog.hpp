/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 13:11:05 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/25 13:37:55 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongDog
:public WrongAnimal
{
	private:
		std::string	name;
	public:
		WrongDog();
		WrongDog(std::string name);
		WrongDog(const WrongDog &another);
		WrongDog& operator=(const WrongDog &another);
		~WrongDog();
		void	makeSound() const;
};

#endif
