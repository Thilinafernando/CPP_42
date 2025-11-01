/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SearchAndReplace.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:02:54 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/08 19:53:12 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEARCHANDREPLACE_HPP
# define SEARCHANDREPLACE_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <fstream>

class	Replace
{
	private:

	public:
		void	replaceFile(std::ifstream &file, std::ofstream &replace, std::string s1, std::string s2);
};

#endif
