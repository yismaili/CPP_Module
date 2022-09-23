/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:28:36 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/23 13:36:08 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account:: _nbAccounts = 0;
int Account:: _totalAmount = 0;
int Account:: _totalNbDeposits = 0;
int Account:: _totalNbWithdrawals = 0;

int	Account::getNbAccounts(void) {
	return (_nbAccounts);
}

int	Account::getTotalAmount(void) {
	return (_totalAmount);
}

int	Account::getNbDeposits(void) {
	return (_totalAmount);
}

int	Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

int		Account::checkAmount( void ) const {
	if (_amount < 0)
		return (0);
	return (1);
}

/* new we wanat create a constracter avic arguments */ 
Account::Account(int depositAmount)
{
    this->_accountIndex = _nbAccounts;
    this->_amount = depositAmount;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_totalAmount += _amount;
    _displayTimestamp();
    std::cout <<"index:" << _accountIndex;
    std::cout <<";amount:" << depositAmount;
    std::cout <<";created" << std::endl;
    _nbAccounts++;
}
/* new we wanat create a Destracter pour close all accountes */ 
Account::~Account()
{
   _displayTimestamp();
    std::cout <<"index:" << _accountIndex;
    std::cout <<";amount:" << _amount;
    std::cout <<";closed" << std::endl;

}

void Account:: _displayTimestamp(void)
{
    time_t get_time = NULL;
    char buffer[100];
    get_time = time(&get_time);
    tm *tm_local = localtime(&get_time);
    strftime (buffer,100,"[%G%m%d_%H%M%S] ",tm_local);
	std::cout << buffer;
}

void Account:: makeDeposit(int deposit)
{
    int p_amount = _amount;
    this->_amount += deposit;
    this->_nbDeposits ++;
    this->_totalNbDeposits++;
    this->_totalAmount += deposit;
    _displayTimestamp();
    std::cout <<"index:" << _accountIndex;
    std::cout <<";p_amount:" << p_amount;
    std::cout <<";deposit:" << deposit;
    std::cout <<";amount:" << _amount;
    std::cout <<";nb_deposits:" << _nbDeposits <<std::endl;
}
bool Account:: makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout <<"index:" << _accountIndex;
    std::cout <<";p_amount:" << _amount;
    if (_amount - withdrawal > 0) {
        this->_amount -=withdrawal;
        this->_nbWithdrawals ++;
        this->_totalNbWithdrawals++;
        this->_totalAmount -= withdrawal;
       std::cout << ";withdrawal:" << withdrawal;
       std::cout << ";amount:" << _amount;
       std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return (true);
    }
    else {
        std::cout << ";withdrawal:";
        std::cout << "refused"  << std::endl;
        return (false);
    }
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account:: displayAccountsInfos()
{
     _displayTimestamp();
    std::cout <<"accounts:" << _nbAccounts;
    std::cout <<";total:" << _totalAmount;
    std::cout <<";deposits:" << _totalNbDeposits;
    std::cout <<";withdrawals:" << _totalNbWithdrawals << std::endl;
}

