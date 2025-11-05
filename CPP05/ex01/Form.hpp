/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:31:01 by tkurukul          #+#    #+#             */
/*   Updated: 2025/11/03 16:13:46 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool	signature;
		const int		grade_sig;
		const int		grade_exec;

	public:
		Form();
		Form(std::string, int sig, int exec);
		Form(const Form& another);
		Form&	operator=(const Form& another);
		~Form();
		std::string	getName() const;
		bool	getStatus() const;
		int		getGradeSig() const;
		int		getGradeExec() const;
		int	beSigned(const Bureaucrat& guy);
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
		class Signed: public std::exception
		{
			public:
				const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& stream, const Form& form);

#endif
