/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:22:56 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/25 13:41:26 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongDog.hpp"
# include "Cat.hpp"
# include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;
	const WrongAnimal* f = new WrongDog();
	std::cout << f->getType() << " " << std::endl;
	std::cout << std::endl;
	f->makeSound();
	delete f;
}
