/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 17:02:46 by tkurukul          #+#    #+#             */
/*   Updated: 2025/12/17 18:00:33 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <deque>
#include <list>


int	main()
{
	MutantStack<int, std::deque<int> >	mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int, std::deque<int> >::const_iterator it = mstack.cbegin();
	MutantStack<int, std::deque<int> >::const_iterator ite = mstack.cend();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "\nTesting by swapping the cointainer used in stack(list)\n\n";

	MutantStack<int, std::list<int> >	smstack;
	smstack.push(5);
	smstack.push(17);
	std::cout << smstack.top() << std::endl;
	smstack.pop();
	std::cout << smstack.size() << std::endl;
	smstack.push(3);
	smstack.push(5);
	smstack.push(737);
	//[...]
	smstack.push(0);
	MutantStack<int, std::list<int> >::iterator its = smstack.begin();
	MutantStack<int, std::list<int> >::iterator ites = smstack.end();

	++its;
	--its;
	while (its != ites)
	{
		std::cout << *its << std::endl;
		++its;
	}
	std::stack<int, std::list<int> > ss(smstack);
	return 0;
}
