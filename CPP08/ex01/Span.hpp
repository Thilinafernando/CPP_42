/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:04:29 by tkurukul          #+#    #+#             */
/*   Updated: 2025/12/16 19:18:33 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <bits/stdc++.h>
# include <exception>
# include <vector>
# include <sstream>

class Span
{
	private:
		std::vector<int>	v;
		unsigned int	max_N;
	public:
		Span();
		Span(unsigned int max_N);
		Span(const Span& another);
		Span&	operator=(const Span& another);
		~Span();
		void	addNumber(int n);
		int		shortestSpan() const;
		int		longestSpan() const;
		int		sizeofVector() const;
		template <typename T>
			void	addcont(T start, T end)
			{
				size_t	size = std::distance(start, end);
				if ((v.size() + size) < max_N)
					v.insert(v.end(), start, end);
				else
				{
					size_t	tmp = max_N - v.size();
					if (tmp > 0)
					{
						T	avaliable_space = start;
						std::advance(avaliable_space, tmp);
						v.insert(v.end(), start, avaliable_space);
					}
				}
			}
};

#endif
