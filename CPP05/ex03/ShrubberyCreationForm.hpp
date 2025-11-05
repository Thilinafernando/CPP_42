/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:28:05 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/26 17:14:24 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

# include <string>
# include <iostream>
# include "AForm.hpp"
# include <filesystem>

class ShrubberyCreationForm: public AForm
{
	private:
		std::string	target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& another);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& another);
		~ShrubberyCreationForm();
		void	execute(Bureaucrat const & executor) const;
		std::string	getTarget() const;
		void		setTarget(std::string target);
};

#endif
