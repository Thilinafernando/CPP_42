/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:52:44 by tkurukul          #+#    #+#             */
/*   Updated: 2025/08/04 02:19:59 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	int			i;
	int			j;
	char		c;
	std::string	arg;

	i = 0;
	while (++i < ac)
	
	{
		arg = av[i];
		j = -1;
		while (arg[++j])
		{
			c = std::toupper(arg[j]);
			std::cout << c;
		}
		if (i + 1 != ac)
			std::cout << " ";
	}
	std::cout << std::endl;
}
