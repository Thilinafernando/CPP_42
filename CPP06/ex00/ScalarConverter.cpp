/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 20:52:22 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/28 22:20:02 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "utils.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& another)
{
	(void)another;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& another)
{
	(void)another;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}

const char*	ScalarConverter::WrongInput::what() const throw()
{
	return ("Bad input, please try again with valid argument.");
}

void	switchCase(int& flag, long double& tmp, std::string str)
{
	switch (flag)
	{
	case 1:
		tmp = toFloat(str);
		break;
	case 2:
		tmp = toIntToDouble(str);
		break;
	case 3:
		tmp = toIntToDouble(str);
		break;
	case 4:
		tmp = static_cast<int>(str[0]);
		break;
	default:
		flag = PseudoLiterals(str);
		break;
	}
}

int	ScalarConverter::convert(std::string str)
{
	try
	{
		int flag = -42;
		bool	flagdot = 0;
		long double tmp;
		if (isFloat(str))
			flag = 1;
		else if (isDouble(str))
			flag = 2;
		else if (isDigit(str))
			flag = 3;
		else if (isChar(str))
			flag = 4;
		else if (PseudoLiterals(str))
			flag = 0;
		else
			throw ScalarConverter::WrongInput();
		flagdot = isDot(str);
		switchCase(flag, tmp, str);
		printingBlock(tmp, flag, flagdot);
	}
	catch (const std::out_of_range& e)
	{
		std::cerr << "Program does not work because: " << e.what() << " input out of range!"<<std::endl;
		return (1);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}

