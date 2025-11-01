/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:24:45 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/30 19:16:32 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "functions.hpp"

int	main()
{
	Base*	a = new A();
	Base*	b = new B();
	Base*	c = new C();
	Base*	random = generate();
	std::cout << std::endl;

	identify(a);
	identify(b);
	identify(c);

	std::cout << std::endl;

	identify(*a);
	identify(*b);
	identify(*c);

	std::cout << std::endl;

	delete a;
	delete b;
	delete c;
	delete random;
}
