/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:13:57 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/26 19:28:19 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <unistd.h>
#include <cstdlib>
#include <time.h>


RobotomyRequestForm::RobotomyRequestForm()
:AForm("RobotomyRequestForm", 72, 45), target("NO_TARGET")
{
	std::cout << "Default Robotomy constructor called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
:AForm("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << "Parameterized Robotomy constructor called with target " << getTarget() << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& another)
:AForm("RobotomyRequestForm", 72, 45), target(another.target)
{
	std::cout << "Copy Robotomy constructor called with target " << getTarget() << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& another)
{
	if (this != &another)
	{
		target = another.target;
		std::cout << "Robotomy copy assignment called with target " << getTarget() << std::endl;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy Destructor called!" << std::endl;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (target);
}

void	RobotomyRequestForm::setTarget(std::string target)
{
	this->target = target;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	srand(time(NULL));
	if (!this->getStatus())
		throw NotSigned();
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	int	random = 1 + rand() % 2;
	std::cout << "Drrrrrrrrrrrrrrrrrrrrrrrr\n" << std::endl;
	sleep(1);
	std::cout << "Drrrrrrrrrrrrrrrrrrrrrrrr\n" << std::endl;
	sleep(1);
	std::cout << "Drrrrrrrrrrrrrrrrrrrrrrrr\n" << std::endl;
	sleep(1);
	// std::cout << random << std::endl;
	if (random == 2)
		std::cout << this->getTarget() << " has been robotomized!" << std::endl;
	else if (random == 1)
		std::cout << "Robotomy failed!" << std::endl;
}
