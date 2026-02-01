/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 15:49:12 by tkurukul          #+#    #+#             */
/*   Updated: 2025/12/17 18:06:21 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <bits/stdc++.h>
# include <exception>
# include <stack>
# include <sstream>

template <typename T, typename C>
class MutantStack: public std::stack<T, C>
{
	private:

	public:
		typedef typename std::stack<T, C>::container_type::iterator	iterator;
		typedef typename std::stack<T, C>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T, C>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T, C>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack();
		MutantStack(const MutantStack& another);
		MutantStack& operator=(const MutantStack& another);
		~MutantStack();
		typename MutantStack::iterator	begin();
		typename MutantStack::iterator	end();
		typename MutantStack::const_iterator	cbegin() const;
		typename MutantStack::const_iterator	cend() const;
		typename MutantStack::reverse_iterator	rbegin();
		typename MutantStack::reverse_iterator	rend();
		typename MutantStack::const_reverse_iterator	crbegin() const;
		typename MutantStack::const_reverse_iterator	crend() const;

};

# include "MutantStack.tpp"

#endif
