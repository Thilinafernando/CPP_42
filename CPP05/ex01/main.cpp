/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:41:12 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/24 20:14:34 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	bob("Bob", 16);

	std::cout << bob << std::endl;
	Form	form("Car marriage", 5, 2);

	std::cout << form << std::endl;
	bob.signForm(form);
	bob.increaseGrade(13);
	std::cout << bob << std::endl;
	bob.signForm(form);
	std::cout << std::endl;
	std::cout << form << std::endl;
	bob.signForm(form);
}
