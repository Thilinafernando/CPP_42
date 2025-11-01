/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 17:10:59 by tkurukul          #+#    #+#             */
/*   Updated: 2025/09/05 13:49:33 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit; // this is a pointer used to refer to an object in the class and it points to the created class in this instance
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts += 1;
	this->_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
		<< ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
		<< ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	char	mytimestr[50];
	time_t	time_secs = 0;
	struct tm *mytime; // struct used for time.h

	std::time(&time_secs);
	mytime = std::localtime(&time_secs); // represents the local time as a struct form (tm)
	std::strftime(mytimestr, 50, "[%G%m%d_%H%M%S]", mytime); // can modify a const char buffer with the time elements taken from a tm struct
	std::cout << mytimestr;
}
int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int	Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int	Account::checkAmount(void) const
{
	return this->_amount;
}

int	Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:"
		<< _totalAmount << ";deposits:" << _totalNbDeposits
		<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_totalNbDeposits += 1;
	_totalAmount += deposit;
	this->_nbDeposits += 1;
	std::cout << " index:" << this->_accountIndex << " p_amount:" << this->_amount
		<< ";deposit:" << deposit << ";amount:";
	this->_amount += deposit;
	std::cout << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << " p_amount:" << this->_amount
		<< ";withdrawal:";
	if (this->checkAmount() < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		_totalNbWithdrawals += 1;
		_totalAmount -= withdrawal;
		this->_nbWithdrawals += 1;
		std::cout << withdrawal << ";amount:" << this->checkAmount()
			<< ";nb_withdrawals:" << this->getNbWithdrawals() << std::endl;
	}
	return (true);
}
// int	main(void)
// {
// 	Account	one(5400);
// 	Account	two(4600);
// 	std::cout << "Account amount " << Account::getTotalAmount() << std::endl;
// }
