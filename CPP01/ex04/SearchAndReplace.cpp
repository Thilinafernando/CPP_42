/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SearchAndReplace.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:48:53 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/25 17:58:16 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SearchAndReplace.hpp"

void	Replace::replaceFile(std::ifstream &file, std::ofstream &replace, std::string s1, std::string s2)
{
	std::string	sentence;
	std::size_t	index;

	while (!file.eof())
	{
		getline(file, sentence);
		while (true)
		{
			index = sentence.find(s1);
			if (index != std::string::npos)
			{
				sentence.erase(index, s1.size());
				for (std::size_t i = 0; i < s2.size(); i++)
				{
					sentence.insert(index, 1, s2[i]);
					index++;
				}
			}
			else
				break ;
		}
		replace << sentence;
		if (!file.eof())
			replace << std::endl;
	}
}

