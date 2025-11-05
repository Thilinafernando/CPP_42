/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:42:05 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/26 17:13:59 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM

#include <string>
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
		std::string	target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& another);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& another);
		~RobotomyRequestForm();
		void	execute(Bureaucrat const & executor) const;
		std::string	getTarget() const;
		void		setTarget(std::string target);
};

#endif
