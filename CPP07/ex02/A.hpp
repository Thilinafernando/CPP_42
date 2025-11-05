/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 21:18:34 by tkurukul          #+#    #+#             */
/*   Updated: 2025/11/05 21:25:00 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include <iostream>

class A
{
	private:
		int a;
	public:
		int getInt() const;
		void setInt(int);
};

std::ostream&	operator<<(std::ostream& stream, const A& another);

#endif
