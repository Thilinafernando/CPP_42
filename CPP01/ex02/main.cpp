/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 19:41:39 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/11 16:32:24 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>

int	main(void)
{
	std::string	brain;
	std::string	*stringPTR;

	brain = "HI THIS IS BRAIN";
	stringPTR = &brain;
	std::cout << std::endl;
	std::cout << "Address of string: " << &brain << std::endl;
	std::cout << "Address held by ptr: " << stringPTR << std::endl;
	std::string &stringREF = brain; // a reference is simirlar to a pointer: but it is just an alias which shares the same memory address as the original value
	std::cout << "Address held by reference: " << &stringREF << std::endl << std::endl;
	std::cout << "Value of string: " << brain << std::endl;
	std::cout << "Value held by pointer: " << *stringPTR << std::endl;
	std::cout << "Value held by reference;D: " << stringREF << std::endl;
	std::cout << std::endl;
	return (0);
}

// reference can only be assigned once. It cannot refer to NULL, must always have an object to refer to.
// Cannot nest: only one level of indirection. Cannot do double pointers and stuff

