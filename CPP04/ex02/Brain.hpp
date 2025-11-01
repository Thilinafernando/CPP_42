/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:35:11 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/29 18:18:11 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string	ideas[100];
		int		pos;
	public:
		Brain();
		Brain(std::string *ideas, std::size_t);
		Brain(const Brain &another);
		Brain& operator=(const Brain &another);
		void	giveIdeas(std::string *ideas, std::size_t);
		void	printIdeas();
		~Brain();
};

#endif
