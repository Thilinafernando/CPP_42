/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:18:38 by tkurukul          #+#    #+#             */
/*   Updated: 2025/12/16 15:59:24 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <bits/stdc++.h>
# include <exception>

template <typename T>
	typename T::const_iterator	easyfind(T &container, int i)
	{
		typename T::iterator	it;
		it = std::find(container.begin(), container.end(), i);
		if (it == container.end())
			throw std::runtime_error("Index not found!");
		else
			std::cout << "Searching for: " << i << "\n" << "Found: " << *it << std::endl;
		return (it);
	}

#endif
