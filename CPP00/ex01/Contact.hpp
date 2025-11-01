/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 20:03:15 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/17 16:33:27 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>
# include <sstream>
# include <cerrno>
# include <iomanip>


class Contact
{
	private:
		std::string	firstname;
		std::string	secondname;
		std::string	nickname;
		std::string	secret;
		std::string	pnumber;

	public:
		Contact();
		~Contact();
		void takeNames(std::string first, std::string second, std::string nick
				, std::string sec);
		void saveNumber(std::string pn);
		void printContact() const;
		void printContacts() const;
};

# endif
