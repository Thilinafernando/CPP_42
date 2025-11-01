/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:40:35 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/05 17:36:28 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	count = 0;
}

PhoneBook::~PhoneBook()
{
}
void	PhoneBook::addContact(Contact &input)
{
	if (index == 9)
		index = 1;
	contacts[index] = input;
	index = (index + 1);
	if (count < 8)
		count++;
}

void	PhoneBook::printList(int i) const
{
	if (count == 0)
	{
		std::cerr << "Error: No entries have been made!" << std::endl;
		return ;
	}
	if (i == -42)
	{
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << "\n";
		for (int in = 0; in < count; ++in)
		{
			std::cout << "|         " << in + 1 << "|";
			contacts[in].printContacts();
		}
		return ;
	}
	else
	{
		if (i > 8 || i < 0 || i > count)
		{
			std::cerr << "Error: Invalid index!" << std::endl;
			return ;
		}
		contacts[i].printContact();
	}
}
