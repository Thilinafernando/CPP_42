/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:02:59 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/26 19:06:29 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		AForm*	(*ptr[3])(std::string target);
	public:
		Intern();
		Intern(const Intern& another);
		Intern& operator=(const Intern& another);
		~Intern();
		AForm*	makeForm(std::string name, std::string target);
};
#endif
