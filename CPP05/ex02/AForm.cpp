/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:24:58 by tkurukul          #+#    #+#             */
/*   Updated: 2025/11/03 16:14:15 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
:signature(false), grade_sig(150), grade_exec(150)
{
	std::cout << "AForm default constructor has been called!" << std::endl;
}

AForm::AForm(std::string name, int sig, int exec)
:name(name), signature(false), grade_sig(sig), grade_exec(exec)
{
	std::cout << "Parameterized AForm constructor has been called!" << std::endl;
}

AForm::AForm(const AForm& another)
:name(another.name), signature(another.signature), grade_sig(another.grade_sig), grade_exec(another.grade_exec)
{
	std::cout << "AForm Copy default constructor has been called!" << std::endl;
}

AForm&	AForm::operator=(const AForm& another)
{
	(void)another;
	std::cout << "Nothing can be done!" << std::endl;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm Destructor has been called!" << std::endl;
}

std::string	AForm::getName() const
{
	return (name);
}

bool	AForm::getStatus() const
{
	return (signature);
}

int	AForm::getGradeSig() const
{
	return (grade_sig);
}

int	AForm::getGradeExec() const
{
	return (grade_exec);
}

int	AForm::beSigned(const Bureaucrat& guy)
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

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too higher than expected!");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too lower than expected!");
}

const char*	AForm::Signed::what() const throw()
{
	return ("Signed already!");
}

const char*	AForm::NotSigned::what() const throw()
{
	return ("AForm is not signed, therefore it cannot be executed!");
}

std::ostream&	operator<<(std::ostream& stream, const AForm& form)
{
	stream << "AForm name: " << form.getName() << "\nAForm status: " << form.getStatus() << "\nForm grade required to sign: " << form.getGradeSig() << "\nForm grade required to execute: " << form.getGradeExec() << std::endl;
	return (stream);
}
