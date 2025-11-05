/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:12:02 by tkurukul          #+#    #+#             */
/*   Updated: 2025/11/05 21:12:56 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T> class Array
{
	private:
		T*	array;
		unsigned int	sizearr;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& another);
		Array& operator=(const Array& another);
		~Array();
		void setoneitemarray(T, size_t manual_index);
		size_t	size() const;
		T&	operator[](size_t index) const;
};

template <typename T>
std::ostream&	operator<<(std::ostream& stream, const Array<T>& a);
# include "Array.tpp"

#endif
