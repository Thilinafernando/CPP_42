/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:01:21 by tkurukul          #+#    #+#             */
/*   Updated: 2025/11/03 19:35:29 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename type> void swap(type& a, type& b)
{
	type tmp = a;

	a = b;
	b = tmp;
}

template <typename type> type min(type a, type b)
{
	if (a < b)
		return (a);
	else if (a == b)
		return (b);
	else
		return (b);
}

template <typename type> type max(type a, type b)
{
	if (a > b)
		return (a);
	else if (a == b)
		return (b);
	else
		return (b);
}

#endif
