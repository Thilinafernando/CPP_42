/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 22:12:59 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/08 19:19:14 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SearchAndReplace.hpp"

int	main(int ac, char **av)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;
	Replace		replac;

	if (ac != 4)
	{
		std::cerr << "Input error" << std::endl;
		return (-1);
	}
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	if (filename.empty())
	{
		std::cerr << "Input error" << std::endl;
		return (-1);
	}
	if (s1.empty())
	{
		std::cerr << "Input error" << std::endl;
		return (-1);
	}
	if (s2.empty())
	{
		std::cerr << "Input error" << std::endl;
		return (-1);
	}
	std::ifstream file(filename.c_str());
	if (file.fail())
	{
		std::cerr << "File doesn't exisit!" << std::endl;
		return (-1);
	}
	filename.append(".replace");
	std::ofstream newFile(filename.c_str());
	replac.replaceFile(file, newFile, s1, s2);
	file.close();
	newFile.close();
	return (0);
}

// int	main(int ac, char **av)
// {
// 	if (ac != 4)
// 		return (-1);
// 	std::string	filename;
// 	std::string	s1;
// 	std::string	s2;
// 	std::string	sentence;
// 	std::string	complex;
// 	std::string	tmp;
// 	std::string	second;
// 	std::size_t	first;
// 	std::size_t test;
// 	int	i = 1;
// 	// std::string	word;
// 	filename = av[1];
// 	s1 = av[2];
// 	s2 = av[3];
// 	// std::cout << filename << std::endl;
// 	std::ifstream file(filename.c_str());
// 	filename.append(".replace");
// 	std::ofstream newFile(filename.c_str());
// 	while (getline(file, sentence))
// 	{
// 		std::cout << sentence << std::endl;
// 		if (i == 1)
// 		{
// 			getline(file, second);
// 			i = 0;
// 			sentence.append(" ");
// 			first = sentence.size();
// 			complex = sentence.append(second);
// 		}
// 		else
// 		{
// 			complex.append(" ");
// 			complex.append(sentence);
// 		}
// 		std::cout << complex  << " >> the complex" << std::endl;
// 		test = complex.find(s1);
// 		if (test != std::string::npos)
// 		{
// 			std::cout << "found it:" << test << std::endl;
// 		}
// 		tmp = complex.substr(0, first - 1);
// 		std::cout << tmp  << " >> the write in replace" << std::endl;
// 		complex = complex.substr(first, -2);
// 		first = complex.size() + 1;
// 		std::cout << complex  << " >> the rest" << std::endl;
// 		newFile << tmp << std::endl;
// 	}
// 	newFile << complex;
// 	newFile.close();
// 	file.close();
// 	return (0);
// }

// FIRST IN FIRST OUT (FIFO)

// keep the size of one sentence in a variable;
// append two sentences;
// break the first sentence out of the complex;
// write it in the new file and continue with the other;
