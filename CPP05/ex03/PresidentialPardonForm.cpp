/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:19:51 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/26 19:28:06 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"


PresidentialPardonForm::PresidentialPardonForm()
:AForm("PresidentialPardonForm", 25, 5), target("NO_TARGET")
{
	std::cout << "Default Presidential Pardon constructor called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
:AForm("PresidentialPardonForm", 25, 5), target(target)
{
	std::cout << "Parameterized Presidential Pardon constructor called with target " << getTarget() << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& another)
:AForm("PresidentialPardonForm", 25, 5), target(another.target)
{
	std::cout << "Copy Presidential Pardon constructor called with target " << getTarget() << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& another)
{
	if (this != &another)
	{
		target = another.target;
		std::cout << "Presidential Pardon copy assignment called with target " << getTarget() << std::endl;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential Pardon Destructor called!" << std::endl;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (target);
}

void	PresidentialPardonForm::setTarget(std::string target)
{
	this->target = target;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getStatus())
		throw NotSigned();
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebox." << std::endl;
}
