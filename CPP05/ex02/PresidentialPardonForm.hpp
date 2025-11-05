/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:27:58 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/26 17:13:47 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

#include <string>
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		std::string	target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& another);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& another);
		~PresidentialPardonForm();
		void	execute(Bureaucrat const & executor) const;
		std::string	getTarget() const;
		void		setTarget(std::string target);
};

#endif
