/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:41:09 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/23 16:52:09 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Form;


class Bureaucrat
{
	private:
		const std::string	name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& another);
		Bureaucrat&	operator=(const Bureaucrat& another);
		~Bureaucrat();
		const std::string	getName() const;
		int				getGrade() const;
		void			increaseGrade(int value);
		void			decreaseGrade(int value);
		void			signForm(Form& form) const;
		class GradeTooHighException: public std::exception
		{
			public:
			const char*	what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
			const char*	what() const throw();
		};
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& bru);

#endif
