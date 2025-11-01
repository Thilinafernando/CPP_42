/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 00:41:03 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/17 16:53:30 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	search(PhoneBook *mybook)
{
	int			index;
	std::string	tmp_str;

	mybook->printList(-42);
	std::cout << "Insert an index..." << "\n";
	if (!std::getline(std::cin, tmp_str))
	{
		std::cerr << "Getline error!" << std::endl;
		return (true);
	}
	std::stringstream	test(tmp_str);
	test >> index;
	if (test.fail())
	{
		std::cerr << "This is not a number." << std::endl;
		return (true);
	}
	mybook->printList(index - 1);
	return (false);
}

bool	add(PhoneBook *mybook)
{
	Contact				tmp;
	std::string			first_name;
	std::string			second_name;
	std::string			nickname;
	std::string			secret;
	std::string			pn;
	long				test;

	std::cout << "Enter First Name..." << "\n";
	if (!std::getline(std::cin, first_name))
	{
		std::cerr << "Getline error!" << std::endl;
		return (true);
	}
	if (first_name.empty())
	{
		std::cerr << "You entered nothing." << std::endl;
		return (true) ;
	}
	std::cout << "Enter Second Name..." << "\n";
	if (!std::getline(std::cin, second_name))
	{
		std::cerr << "Getline error!" << std::endl;
		return (true);
	}
	if (second_name.empty())
	{
		std::cerr << "You entered nothing." << std::endl;
		return (true) ;
	}
	std::cout << "Enter Nickname..." << "\n";
	if (!std::getline(std::cin, nickname))
	{
		std::cerr << "Getline error!" << std::endl;
		return (true);
	}
	if (nickname.empty())
	{
		std::cerr << "You entered nothing." << std::endl;
		return (true) ;
	}
	std::cout << "Enter One of your secrets..." << "\n";
	if (!std::getline(std::cin, secret))
	{
		std::cerr << "Getline error!" << std::endl;
		return (true);
	}
	if (secret.empty())
	{
		std::cerr << "You entered nothing." << std::endl;
		return (true) ;
	}
	std::cout << "Enter phone number..." << "\n";
	if (!std::getline(std::cin, pn))
	{
		std::cerr << "Getline error!" << std::endl;
		return (true);
	}
	std::stringstream	phone(pn);
	phone >> test;
	if(phone.fail())
	{
		std::cerr << "This is not a number." << std::endl;
		return (true);
	}
	tmp.takeNames(first_name, second_name, nickname, secret);
	tmp.saveNumber(pn);
	mybook->addContact(tmp);
	return (false);
}

int	main(void)
{
	PhoneBook	mybook;
	std::string	str;

	std::cout << "Please choose one of the following commands; "
		<< "\"ADD\", \"SEARCH\", \"EXIT\"..." << "\n";
	while (true)
	{
		if (!std::getline(std::cin, str))
		break ;
		if (!str.compare("EXIT"))
		break ;
		else if (!str.compare("SEARCH"))
		{
			if (search(&mybook))
			continue ;
		}
		else if (!str.compare("ADD"))
		{
			if (add(&mybook))
			continue ;
		}
		std::cout << "Please choose one of the following commands; "
				<< "\"ADD\", \"SEARCH\", \"EXIT\"..." << "\n";
	}
	return (0);
}
