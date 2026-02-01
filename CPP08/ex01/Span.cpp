/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:27:14 by tkurukul          #+#    #+#             */
/*   Updated: 2025/12/16 19:24:15 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
:v(0), max_N(0)
{
	std::cout << "Default constructor has been called!" << std::endl;
}

Span::Span(unsigned int n)
:v(0), max_N(n)
{
	std::cout << "Paramterized constructor has been called!" << std::endl;
}

Span::Span(const Span& another)
:v(another.v), max_N(another.max_N)
{
	std::cout << "Copy constructor has been called!" << std::endl;
}

Span&	Span::operator=(const Span& another)
{
	if (this != &another)
	{
		v = another.v;
		max_N = another.max_N;
		std::cout << "Copy asiignemnt has been called!" << std::endl;
	}
	return (*this);
}

Span::~Span()
{
	std::cout << "Destructor has been called!" << std::endl;
}

void	Span::addNumber(int n)
{
	if (v.size() < max_N)
		v.push_back(n);
	else
		throw	std::runtime_error("Requested to add too many elements!");
}

int	Span::shortestSpan() const
{
	std::vector<int>	tmp = v;
	int	min = INT_MAX;

	if (tmp.size() < 2)
	{
		throw	std::runtime_error("Request not valid, too few elements!");
		return (-1);
	}
	sort(tmp.begin(), tmp.end());
	for (unsigned int i = 0; i < this->max_N - 1; i++)
	{
		if ((tmp[i + 1] - tmp[i] < min ) && (tmp[i + 1] - tmp[i] != 0))
			min = tmp[i + 1] - tmp[i];
	}
	return (min);
}

int	Span::longestSpan() const
{
	std::vector<int>	tmp = v;

	if (tmp.size() < 2)
	{
		throw	std::runtime_error("Request not valid, too few elements!");
		return (-1);
	}
	sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - (*tmp.begin()));
}

int	Span::sizeofVector() const
{
	return (v.size());
}
