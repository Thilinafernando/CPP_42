/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:25:37 by tkurukul          #+#    #+#             */
/*   Updated: 2025/12/17 18:08:45 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T, typename C>
	MutantStack<T, C>::MutantStack()
	:std::stack<T, C>()
	{
		std::cout << "Constructor with custom container of MutantStack has been called!" << std::endl;
	}

template <typename T, typename C>
	MutantStack<T, C>::MutantStack(const MutantStack& another)
	:std::stack<T, C>(another)
	{
		std::cout << "Copy Constructor of MutantStack has been called!" << std::endl;
	}

template <typename T, typename C>
	MutantStack<T, C>&	MutantStack<T, C>::operator=(const MutantStack& another)
	{
		if (this != &another)
		{
			std::stack<T, C>::operator=(another);
			std::cout << "Copy Assignment of MutantStack has been called!" << std::endl;
		}
		return (*this);
	}

template <typename T, typename C>
	MutantStack<T, C>::~MutantStack()
	{
		std::cout << "Destructor of MutantStack has been called!" << std::endl;
	}

template <typename T, typename C>
	typename MutantStack<T, C>::iterator	MutantStack<T, C>::begin()
	{
		return (this->c.begin());
	}

template <typename T, typename C>
	typename MutantStack<T, C>::iterator	MutantStack<T, C>::end()
	{
		return (this->c.end());
	}

template <typename T, typename C>
	typename MutantStack<T, C>::const_iterator	MutantStack<T, C>::cbegin() const
	{
		return (this->c.begin());
	}

template <typename T, typename C>
	typename MutantStack<T, C>::const_iterator	MutantStack<T, C>::cend() const
	{
		return (this->c.end());
	}

template <typename T, typename C>
	typename MutantStack<T, C>::reverse_iterator	MutantStack<T, C>::rbegin()
	{
		return (this->c.rbegin());
	}

template <typename T, typename C>
	typename MutantStack<T, C>::reverse_iterator	MutantStack<T, C>::rend()
	{
		return (this->c.rend());
	}

template <typename T, typename C>
	typename MutantStack<T, C>::const_reverse_iterator	MutantStack<T, C>::crbegin() const
	{
		return (this->c.rbegin());
	}

template <typename T, typename C>
	typename MutantStack<T, C>::const_reverse_iterator	MutantStack<T, C>::crend() const
	{
		return (this->c.rend());
	}
