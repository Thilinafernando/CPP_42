/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:54:47 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/28 19:11:10 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <string>
#include <cctype>
#include <limits>
#include <sstream>

// checks i did on str to identify the type
bool	isFloat(std::string str);
bool	isDouble(std::string str);
bool	isDigit(std::string str);
bool	isChar(std::string str);
bool	isDot(std::string str);
int	PseudoLiterals(std::string str);

// functions broken into pieces
char	minusOrPlus(int flag);
bool	manualPrinting(int flag);
void	printingBlock(long double tmp, int flag, bool);

// convertion
long double	toFloat(std::string str);
long double	toIntToDouble(std::string str);

#endif
