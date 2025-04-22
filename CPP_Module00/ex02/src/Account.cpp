





#include "../inc/Account.hpp"
#include <iostream>
#include <string>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;

	_amount = initial_deposit;
	_totalAmount += _amount;

	//Print timestamp
	_displayTimestamp();
	//Print index, amount and created
	std::cout << "index:" << Account::_accountIndex << ";amount:" 
		<< _amount << ";created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	//Print index, amount and created
	std::cout << "index:" << Account::_accountIndex << ";amount:" 
		<< _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	//Print timestamp
	_displayTimestamp();
	//Print all totals accounts, totals, deposits and witdrawals
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	//Print timestamp
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";p_amount:" << _amount
		<< ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:"
		<< _nbDeposits + 1 << std::endl;
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	//Print timestamp
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
		<< ";withdrawal:";
	if (withdrawal > _amount)
		std::cout << "refused" << std::endl;
	else
	{
		std::cout << withdrawal << ";amount:" << _amount - withdrawal
		<< ";nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		return (true);
	}
	return (false);
}

int	Account::checkAmount() const
{
	return (_amount);
}

void	Account::displayStatus() const
{
	//Print timestamp
	_displayTimestamp();
	//Show individual resume of index, amount, deposits and withdrawals
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() 
		<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}


//Function that print timestamp (year/month/day _ hour/min/sec)
//If some number of the hour, min or sec is less than 10 I need to print a 0 before the number
void	Account::_displayTimestamp(void)
{
	std::time_t	actual = std::time(NULL);
	std::tm		*localTime = std::localtime(&actual);

	std::cout << "[" << (localTime->tm_year + 1900) << (localTime->tm_mon + 1)
		<< (localTime->tm_mday) << "_" << (localTime->tm_hour < 10 ? "0" : "")
		<< (localTime->tm_hour) << (localTime->tm_min < 10 ? "0" : "") << (localTime->tm_min)
		<< (localTime->tm_sec < 10 ? "0" : "") << (localTime->tm_sec) << "] ";
}