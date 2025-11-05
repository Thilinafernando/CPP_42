/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:44:50 by tkurukul          #+#    #+#             */
/*   Updated: 2025/11/05 17:29:22 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename A, typename S, typename F>
	void iter(A *a, const S length, F f)
	{
		for (S i = 0; i < length; i++)
			f(a[i]);
	}

// template <typename array, typename size> void iter(array *a, const size length, void (*func)(array&))
// {
// 	for (size i = 0; i < length; i++)
// 		func(a[i]);
// }

#endif
