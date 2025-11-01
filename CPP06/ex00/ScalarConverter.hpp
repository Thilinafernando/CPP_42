/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 20:24:59 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/28 22:19:27 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER
# define SCALARCONVERTER

# include <iostream>
# include <string>
#include <cctype>
#include <limits>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& another);
		ScalarConverter& operator=(const ScalarConverter& another);
	public:
		~ScalarConverter();
		static int	convert(std::string str);
	class WrongInput: public std::exception
	{
		public:
			const char*	what() const throw();
	};
};
#endif
