/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:24:58 by tkurukul          #+#    #+#             */
/*   Updated: 2025/11/03 16:13:52 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
:signature(false), grade_sig(150), grade_exec(150)
{
	std::cout << "Form default constructor has been called!" << std::endl;
}

Form::Form(std::string name, int sig, int exec)
:name(name), signature(false), grade_sig(sig), grade_exec(exec)
{
	std::cout << "Parameterized Form constructor has been called!" << std::endl;
}

Form::Form(const Form& another)
:name(another.name), signature(another.signature), grade_sig(another.grade_sig), grade_exec(another.grade_exec)
{
	std::cout << "Form Copy default constructor has been called!" << std::endl;
}

Form&	Form::operator=(const Form& another)
{
	(void)another;
	std::cout << "Nothing can be done!" << std::endl;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form Destructor has been called!" << std::endl;
}

std::string	Form::getName() const
{
	return (name);
}

bool	Form::getStatus() const
{
	return (signature);
}

int	Form::getGradeSig() const
{
	return (grade_sig);
}

int	Form::getGradeExec() const
{
	return (grade_exec);
}

int	Form::beSigned(const Bureaucrat& guy)
{
	if (signature == true)
	{
		throw Signed();
		return (0);
	}
	if (guy.getGrade() > grade_sig)
	{
		throw GradeTooLowException();
		return (0);
	}
	signature = true;
	return (1);
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade too higher than expected!");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade too lower than expected!");
}

const char*	Form::Signed::what() const throw()
{
	return ("Signed already!");
}

std::ostream&	operator<<(std::ostream& stream, const Form& form)
{
	stream << "Form name: " << form.getName() << "\nForm status: " << form.getStatus() << "\nForm grade required to sign: " << form.getGradeSig() << "\nForm grade required to execute: " << form.getGradeExec() << std::endl;
	return (stream);
}
