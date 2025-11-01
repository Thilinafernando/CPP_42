/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:22:56 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/19 14:31:40 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Dog.hpp"

int main()
{
	Animal *animals[10];
	std::string	ideas[3] = {"Idea", "Idea2", "Idea3"};

	for (int i = 0; i < 10; i++)
	{
		if (i <= 4)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << std::endl;

	animals[1]->makeSound();
	dynamic_cast<Dog*>(animals[2])->showBrain().giveIdeas(ideas, 3);
	dynamic_cast<Dog*>(animals[2])->showBrain().printIdeas();
	std::cout << std::endl;


	for (int i = 0; i < 10; i++)
		delete animals[i];
}
