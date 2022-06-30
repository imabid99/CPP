#include <iostream>
#include <iomanip>

#include "Account.hpp"


static int	_nbAccounts = 0;
static int	_totalAmount = 0;
static int	_totalNbDeposits = 0;
static int	_totalNbWithdrawals = 0; 



Account::Account(int initial_deposit) {

	std::cout << "created" << std::endl;
}