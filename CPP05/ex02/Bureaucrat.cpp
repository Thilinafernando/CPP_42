/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:41:06 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/26 17:08:48 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
# include "AForm.hpp"


Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor Bureaucrat has been called!" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
:name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
	{
		this->grade = grade;
		std::cout << "Parameterized constructor Bureaucrat has been called!" << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& another)
:name(another.name), grade(another.grade)
{
	std::cout << "Copy constructor Bureaucrat has been called!" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& another)
{
	(void)another;
	std::cout << "Copy assignment will not work!" << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor of the Bureaucrat been has called upon " << name << std::endl;
}

const std::string	Bureaucrat::getName() const
{
	return (name);
}

int	Bureaucrat::getGrade() const
{
	return (grade);
}

void	Bureaucrat::increaseGrade(int val)
{
		if ((grade - val) < 1)
		throw GradeTooHighException();
	else
		grade -= val;

}

void	Bureaucrat::decreaseGrade(int val)
{
	if ((grade + val) > 150)
		throw GradeTooLowException();
	else
		grade += val;
}

void	Bureaucrat::executeForm(const AForm& form)
{
	try
	{
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << form.getName() << " wasn't executed because " << e.what() << std::endl;
	}
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

void	Bureaucrat::signForm(AForm& form) const
{
	try
	{
		if (form.beSigned(*this))
			std::cout << name << " signed " << form.getName() << std::endl;
	}
	catch (const AForm::Signed& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& stream, const Bureaucrat& bru)
{
	stream << bru.getName() << ", bureaucrat grade " << bru.getGrade() << std::endl;
	return (stream);
}
