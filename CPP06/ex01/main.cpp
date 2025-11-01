/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:27:38 by tkurukul          #+#    #+#             */
/*   Updated: 2025/10/30 16:41:36 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int	main()
{
	Data	data;

	data.data_member = 0;
	data.another = new std::string("Hello World");
	data.next = NULL;
	uintptr_t tmp = Serializer::serialize(&data);
	std::cout << tmp << std::endl;
	Data*	ttmp = Serializer::deserialize(tmp);
	std::cout <<  ttmp << std::endl;
	std::cout <<  *ttmp->another << std::endl;
	delete data.another;
}
