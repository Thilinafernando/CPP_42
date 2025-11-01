/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:40:32 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/17 16:48:39 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::takeNames(std::string first, std::string second, std::string nick, std::string sec)
{
	firstname = first;
	secondname = second;
	nickname = nick;
	secret = sec;
}

void	Contact::saveNumber(std::string pn)
{
	pnumber = pn;
}

// void	printingTen(std::string str)
// {
// 	int	flag;
// 	int	size;
// 	int	j;

// 	flag = 0;
// 	size = 0;
// 	j = 0;
// 	if (str.size() >= 10)
// 		flag = 1;
// 	else
// 		size = 9 - str.size();
// 	for (int i = 0; str[j]; ++i)
// 	{
// 		if (i == 9 && flag == 1)
// 		{
// 			std::cout << ".";
// 			break ;
// 		}
// 		else if (i <= size && flag == 0)
// 			std::cout << " ";
// 		else
// 		{
// 			std::cout << str[j];
// 			j++;
// 		}
// 	}
// 	std::cout << "|";
// 	return ;
// }

std::string	whole(std::string str)
{
	std::string	tmp;
	if (str.size() >= 10)
	{
		tmp = str.substr(0, 9);
		tmp.append(".");
		return (tmp);
	}
	return (str);
}

void	Contact::printContacts() const
{
	std::string	tmp;
	std::cout << std::setw(10) << std::right << whole(firstname) << "|"
				<< std::setw(10) << std::right << whole(secondname) << "|"
				<< std::setw(10) << std::right << whole(nickname) << "|";;
	std::cout << "\n";
}

void	Contact::printContact() const
{
	std::cout << "First Name: " << firstname << "\n";
	std::cout << "Second Name: " << secondname << "\n";
	std::cout << "Nickname: " << nickname << "\n";
	std::cout << "Phone Number: " << pnumber << "\n";
	std::cout << "Darkest secret: " << secret << "\n";
}
