/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:00:02 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/28 22:27:39 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool	isFloat(std::string str)
{
	if (!str[0])
		return (false);
	int	flagf = 0;
	int flagdot = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == 'f')
			flagf += 1;
		if (str[i] == '.')
			flagdot += 1;
		if (!std::isdigit(str[i]) && str[i] != '.'
			&& str[i] != '+' && str[i] != '-'&& str[i] != 'f')
			return (false);
		if ((str[i] == '+' || str[i] == '-') && i != 0)
			return (false);
	}
	if (flagf != 1|| flagdot != 1)
		return (false);
	return (true);
}

bool	isDouble(std::string str)
{
	if (!str[0])
		return (false);
	int flagdot = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '.')
			flagdot += 1;
		if (!std::isdigit(str[i]) && str[i] != '.'
			&& (str[i] != '+' && str[i] != '-' && i == 0))
			return (false);
		if ((str[i] == '+' || str[i] == '-') && i != 0)
			return (false);
	}
	if (flagdot != 1 || str[str.size() - 1] == '.')
		return (false);
	return (true);
}

bool	isDigit(std::string str)
{
	int flagdig = 0;
	if (!str[0])
		return (false);
	for (int i = 0; str[i]; i++)
	{
		if (std::isdigit(str[i]))
			flagdig += 1;
		if (!std::isdigit(str[i]) && str[i] != '+' && str[i] != '-')
			return (false);
		if ((str[i] == '+' || str[i] == '-') && i != 0)
			return (false);
	}
	if (!flagdig)
		return (false);
	return (true);
}

bool	isChar(std::string str)
{
	if (!str[0])
		return (false);
	if (str.size() > 1)
		return (false);
	if (!std::isalpha(str[0]) || !std::isprint(str[0]))
			return (false);
	return (true);
}

int	PseudoLiterals(std::string str)
{
	if (!str.compare("-inf") || !str.compare("-inff"))
		return (42);
	else if (!str.compare("+inf") || !str.compare("+inff"))
		return (43);
	else if (!str.compare("nan") || !str.compare("nanf"))
		return (44);
	return (0);
}

char	minusOrPlus(int flag)
{
	if (flag == 42)
		return ('-');
	else if (flag == 43)
		return ('+');
	return (0);
}

bool	manualPrinting(int flag)
{
	if (flag == 42 || flag == 43)
	{
		std::cerr << "char: impossible!" << std::endl;
		std::cout << "int: impossible!" << std::endl;
		std::cout << "float: "<< minusOrPlus(flag) << "inff" << std::endl;
		std::cout << "float: "<< minusOrPlus(flag) << "inf" << std::endl;
		return (1);
	}
	else if(flag == 44)
	{
		std::cerr << "char: impossible!" << std::endl;
		std::cout << "int: impossible!" << std::endl;
		std::cout << "float: "<< "nanf" << std::endl;
		std::cout << "float: "<< "nan" << std::endl;
		return (1);
	}
	return (0);
}

void	printingBlock(long double tmp, int flag, bool flagdot)
{
	if (manualPrinting(flag))
		return ;
	if (static_cast<char>(tmp) >= 32 && static_cast<char>(tmp) <= 126)
		std::cout << "char: '" << static_cast<unsigned char>(tmp) << "'" << std::endl;
	else if ((tmp > std::numeric_limits<unsigned char>::max()
			&& tmp < std::numeric_limits<unsigned char>::min()))
		std::cout << "char: imposiible!" << std::endl;
	else
		std::cout << "char: not printable!" << std::endl;
	if (!(tmp > std::numeric_limits<int>::max() && tmp < std::numeric_limits<int>::min()))
		std::cout << "int: " << static_cast<int>(tmp) << std::endl;
	else
		std::cout << "int: impossible!" << std::endl;
	if ((tmp < std::numeric_limits<float>::max() && tmp >= -std::numeric_limits<float>::max() && flagdot))
		std::cout << "float: " << static_cast<float>(tmp) << "f" << std::endl;
	else if ((tmp <= std::numeric_limits<float>::max() && tmp >= -std::numeric_limits<float>::max() && !flagdot))
		std::cout << "float: " << static_cast<float>(tmp) << ".0f" << std::endl;
	else
		std::cout << "float: impossible!" << std::endl;
	if ((tmp <= std::numeric_limits<double>::max() && tmp >= -std::numeric_limits<double>::max() && flagdot))
		std::cout << "double: " << static_cast<double>(tmp) << std::endl;
	else if ((tmp <= std::numeric_limits<double>::max() && tmp >= -std::numeric_limits<double>::max() && !flagdot))
		std::cout << "double: " << static_cast<double>(tmp) << ".0" << std::endl;
	else
		std::cout << "double: impossible!" << std::endl;
}

long double	toFloat(std::string str)
{
	str.erase(str.end() - 1);
	std::stringstream	tmp(str);
	long double ret = -404;
	tmp >> ret;
	if (tmp.fail())
		std::cerr << "1Sstream has failed." << std::endl;
	// std::cout << "ret: " << ret << std::endl;
	return (ret);
}

long double	toIntToDouble(std::string str)
{
	std::stringstream	tmp(str);
	long double ret = -404;
	tmp >> ret;
	if (tmp.fail())
		std::cerr << "2Sstream has failed." << std::endl;
	return (ret);
}

bool	isDot(std::string str)
{
	int flagdot = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '.')
			flagdot += 1;
	}
	if (!flagdot)
		return (false);
	return (true);
}
