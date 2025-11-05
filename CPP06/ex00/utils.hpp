/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:54:47 by tkurukul          #+#    #+#             */
/*   Updated: 2025/11/04 19:44:16 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <string>
#include <cctype>
#include <cstdlib>
#include <limits>
#include <sstream>

// checks i did on str to identify the type
bool	isFloat(std::string str);
bool	isDouble(std::string str);
bool	isDigit(std::string str);
bool	isChar(std::string str);
int	PseudoLiterals(std::string str);

// functions broken into pieces
char	minusOrPlus(int flag);
bool	manualPrinting(int flag);
void	printingBlock(long double tmp, int flag);

// convertion
long double	toFloat(std::string str);
long double	toIntToDouble(std::string str);

#endif
