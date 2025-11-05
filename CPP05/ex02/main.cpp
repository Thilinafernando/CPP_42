/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:41:12 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/26 17:36:23 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int	main(void)
{
	Bureaucrat	bob("Bob", 16);
	std::cout << bob << std::endl;

	ShrubberyCreationForm	form("42Firenze");
	std::cout << form << std::endl;
	bob.signForm(form);
	bob.increaseGrade(13);
	std::cout << bob << std::endl;
	bob.signForm(form);
	std::cout << std::endl;
	std::cout << form << std::endl;
	bob.executeForm(form);
	RobotomyRequestForm	test("Ilyas");
	std::cout << test << std::endl;
	std::cout << std::endl;
	bob.signForm(test);
	std::cout << std::endl;
	bob.decreaseGrade(140);
	std::cout << bob << std::endl;
	bob.executeForm(test);
	bob.increaseGrade(140);
	std::cout << bob << std::endl;
	std::cout << std::endl;
	bob.executeForm(test);
	std::cout << std::endl;
	std::cout << bob << std::endl;
	PresidentialPardonForm	kelly("RKelly");
	std::cout << kelly << std::endl;
	bob.increaseGrade(1);
	bob.signForm(kelly);
	bob.executeForm(kelly);
	std::cout << std::endl;
}
