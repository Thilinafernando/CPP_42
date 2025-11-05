/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:31:01 by tkurukul          #+#    #+#             */
/*   Updated: 2025/11/02 01:18:01 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <fstream>


class Bureaucrat;


class AForm
{
	private:
		const std::string	name;
		bool	signature;
		const int		grade_sig;
		const int		grade_exec;

	public:
		AForm();
		AForm(std::string, int sig, int exec);
		AForm(const AForm& another);
		AForm&	operator=(const AForm& another);
		virtual ~AForm();
		std::string	getName() const;
		bool	getStatus() const;
		int		getGradeSig() const;
		int		getGradeExec() const;
		int	beSigned(const Bureaucrat& guy);
		virtual void	execute(Bureaucrat const & executor) const = 0;
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
		class NotSigned: public std::exception
		{
			public:
				const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& stream, const AForm& Aform);

#endif
