/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:44:35 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/26 17:14:18 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
:AForm("ShrubberyCreationForm", 145, 137), target("NO_TARGET")
{
	std::cout << "Default Shubbery constructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
:AForm("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "Parameterized Shubbery constructor called with target " << getTarget() << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& another)
:AForm("ShrubberyCreationForm", 145, 137), target(another.target)
{
	std::cout << "Copy Shubbery constructor called with target " << getTarget() << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& another)
{
	if (this != &another)
	{
		target = another.target;
		std::cout << "Shubbery copy assignment called with target " << getTarget() << std::endl;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shubbery Destructor called!" << std::endl;
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (target);
}

void	ShrubberyCreationForm::setTarget(std::string target)
{
	this->target = target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getStatus())
		throw NotSigned();
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	std::string	filename = target + "_shrubbery.txt";
	std::ifstream	test(filename.c_str());
	if (test.fail())
	{
		std::ofstream	file(filename.c_str());

		file << "       /\\\n"
				"      /**\\\n"
				"     /****\\\n"
				"    /******\\\n"
				"   /********\\\n"
				"  /**********\\\n"
				" /************\\\n"
				"/**************\\\n"
				"       ||\n"
				"       ||" << std::endl;
		file.close();
	}
	else
	{
		std::ofstream	test1(filename.c_str(), std::ofstream::app);
				test1 << "\n" <<"       /\\\n"
				"      /**\\\n"
				"     /****\\\n"
				"    /******\\\n"
				"   /********\\\n"
				"  /**********\\\n"
				" /************\\\n"
				"/**************\\\n"
				"       ||\n"
				"       ||" << std::endl;
		test1.close();
	}
	test.close();
}
