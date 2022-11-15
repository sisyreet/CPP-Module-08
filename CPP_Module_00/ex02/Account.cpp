#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account(int initial_deposit) {
	std::cout << "1 >> \n";
	this->_amount = initial_deposit;
	return;
}

Account::~Account(void) {
	std::cout << "2 >> \n";
	return;
}

int Account::getNbAccounts(void) {
	return _nbAccounts;
}

int	Account::getTotalAmount(void) {
	return _totalAmount;
}

int	Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "3 >> \n";
	std::cout << _nbAccounts << " " << _totalAmount 
	<< " " << _totalNbDeposits << " " << -_totalNbWithdrawals << " \n";
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "4 >> \n";
	this->_accountIndex = deposit;
	this->_amount = deposit;
	this->_nbDeposits = deposit;
	this->_nbWithdrawals = deposit;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "5 >> \n";
	std::cout << "MAKE WITHDRAWAL:" << withdrawal << "\n";
	return 1;
}

int		Account::checkAmount(void) const {
	_displayTimestamp();
	std::cout << "6 >> \n";
	return 1;
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "7 >> \n";
	std::cout << 
	"index:" << _accountIndex << ";" << 
	"amount:" << _amount << ";" << 
	"deposits:" << _nbDeposits << ";" <<
	"withdrawls:" << _nbWithdrawals << " \n";
}

void	Account::_displayTimestamp(void) {
	std::time_t result = std::time(nullptr);
    std::cout << std::ctime(&result);
}