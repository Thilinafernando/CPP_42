/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:00:02 by tkurukul          #+#    #+#             */
/*   Updated: 2025/11/05 20:16:36 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <iomanip>

bool	isFloat(std::string str)
{
	if (str.empty())
		return (false);
	int	flagf = 0;
	int flagdot = 0;
	for (int i = 0; str[i]; ++i)
	{
		if (str[i] == 'f')
			flagf += 1;
		else if (str[i] == '.')
			flagdot += 1;
		else if ((str[i] == '+' || str[i] == '-') && i == 0)
			continue ;
		else if (!std::isdigit(str[i]))
			return (false);
	}
	if (flagf != 1 || flagdot > 1)
		return (false);
	return (true);
}

bool	isDouble(std::string str)
{
	if (str.empty())
		return (false);
	int flagdot = 0;
	for (int i = 0; str[i]; ++i)
	{
		if (str[i] == '.')
			flagdot += 1;
		else if ((str[i] == '+' || str[i] == '-') && i == 0)
			continue ;
		else if (!std::isdigit(str[i]))
			return (false);
	}
	if (flagdot != 1 || str[str.size() - 1] == '.')
		return (false);
	return (true);
}

bool	isDigit(std::string str)
{
	bool flagdig = false;
	if (str.empty())
		return (false);
	for (int i = 0; str[i]; ++i)
	{
		if (std::isdigit(str[i]))
			flagdig = true;
		else if ((str[i] == '+' || str[i] == '-') && i == 0)
			continue ;
		else if ((!std::isdigit(str[i])))
			return (false);
	}
	if (!flagdig)
		return (false);
	return (true);
}

bool	isChar(std::string str)
{
	if (str.empty())
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

void	printingBlock(long double tmp, int flag)
{
	// std::cout << tmp << std::endl;
	if (manualPrinting(flag))
		return ;
	if ((tmp > std::numeric_limits<char>::max()
				|| tmp < std::numeric_limits<char>::min()))
		std::cout << "char: impossible!" << std::endl;
	else if (static_cast<char>(tmp) >= 32 && static_cast<char>(tmp) <= 126)
		std::cout << "char: '" << static_cast<char>(tmp) << "'" << std::endl;
	else
		std::cout << "char: not printable!" << std::endl;
	if (!(tmp > std::numeric_limits<int>::max() || tmp < -std::numeric_limits<int>::max() - 1))
		std::cout << "int: " << static_cast<int>(tmp) << std::endl;
	else
		std::cout << "int: impossible!" << std::endl;
	if (((tmp < std::numeric_limits<float>::max() || tmp >= -std::numeric_limits<float>::max())))
		std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(tmp) << "f" << std::endl;
	else
		std::cout << "float: impossible!" << std::endl;
	if (((tmp <= std::numeric_limits<double>::max() || tmp >= -std::numeric_limits<double>::max())))
		std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(tmp) << std::endl;
	else
		std::cout << "double: impossible!" << std::endl;
}

long double	toFloat(std::string str)
{
	if (str[str.size() - 1] == 'f')
		str.erase(str.end() - 1);
	// std::cout << "str: " << str << std::endl;
	std::stringstream	tmp(str);
	long double ret = -404;
	tmp >> ret;
	if (tmp.fail())
	{
		// std::cerr << "1Sstream has failed." << std::endl;
		return (-404);
	}
	return (ret);
}

long double	toIntToDouble(std::string str)
{
	std::stringstream	tmp(str);
	long double ret = -404;
	tmp >> ret;
	if (tmp.fail())
	{
		// std::cerr << "2Sstream has failed." << std::endl;
		return (-404);
	}
	// std::cout << "ret: " << ret << std::endl;
	return (ret);
}
