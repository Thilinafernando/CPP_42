/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:26:10 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/30 19:25:27 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

Base*	generate(void)
{
	Base*	tmp = NULL;
	srand(time(NULL));
	int	random = rand() % 3;
	switch (random)
	{
	case 1:
		tmp = new A();
		std::cout << "Type A created!" << std::endl;
		break;
	case 2:
		tmp = new B();
		std::cout << "Type B created!" << std::endl;
		break;
	default:
		tmp = new C();
		std::cout << "Type C created!" << std::endl;
		break;
	}
	return (tmp);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "This class is type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "This class is type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "This class is type C" << std::endl;
	else
		std::cerr << "This class type is not recognisable" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		Base& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "This class is type A" << std::endl;
		return ;
	}
	catch (const std::exception& e)
	{}
	try
	{
		Base& a = dynamic_cast<B&>(p);
		(void)a;
		std::cout << "This class is type B" << std::endl;
		return ;
	}
	catch (const std::exception& e)
	{}
	try
	{
		Base& a = dynamic_cast<C&>(p);
		(void)a;
		std::cout << "This class is type C" << std::endl;
		return ;
	}
	catch (const std::exception& e)
	{}
}
