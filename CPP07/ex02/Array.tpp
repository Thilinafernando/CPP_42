/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:03:32 by tkurukul          #+#    #+#             */
/*   Updated: 2025/11/05 21:39:12 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
: array(NULL), sizearr(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n)
: sizearr(n)
{
	array = new T[n] ();
}

template <typename T>
size_t Array<T>::size() const
{
	return (sizearr);
}

template <typename T>
Array<T>::Array(const Array& another)
:sizearr(another.size)
{
	array = new T[another.size()] ();
	for (size_t i = 0; i < another.size(); i++)
		array[i] = another.array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& another)
{
	if (this != &another)
	{
		sizearr = another.size();
		if (array)
		{
			for (size_t i = 0; i < another.size(); i++)
				array[i] = another.array[i];
		}
		else
		{
			array = new T[another.size()] ();
			for (size_t i = 0; i < another.size(); i++)
				array[i] = another.array[i];
		}
	}
	return (*this);
}

template <typename T>
void Array<T>::setoneitemarray(T element, size_t index_manual)
{
	array[index_manual] = element;
}

template <typename T>
Array<T>::~Array()
{
	delete [] array;
}

template <typename T>
T&	Array<T>::operator[](size_t index) const
{
	if (index < 0 || index > sizearr)
		throw std::runtime_error("Invalid given index");
	return (array[index]);
}

template <typename T>
std::ostream&	operator<<(std::ostream& stream, const Array<T>& a)
{
	for (size_t i = 0; i < a.size(); i++)
		stream << a[i] << std::endl;
	return (stream);
}

