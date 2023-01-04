#include "Account.h"
#include <sstream>
#include <string>
#include <iostream>
#include <iomanip>

std::stringstream initial;
/**
 * @brief Construct a new Account object and sets its initial balance to whatever we pass in. In order to  get the initial balance it parses the dollars and cents into strings and stores the result into m_initial string
 *
 * @param dollars
 * @param cents
 */
Account::Account(int dollars, int cents) : Money(dollars, cents)
{
	m_dollars = dollars + cents * 0.01;
	m_cents = (cents) % 100;
	auto initDollars = std::to_string(m_dollars);
	auto initCents = std::to_string(m_cents);

	m_initial = initDollars + "." + initCents;
};

/**
 * @brief deposits money to the account if the money to add(in cents) is more than zero.
 * @param money
 */
void Account::makeDeposit(Money money)
{

	if (money.getAmmount() < 0)
	{
		flag = false;
		std::cout << "Not accepted value \n";
	}
	else
	{
		flag = true;
		deposits.push_back(money);

		this->m_ammount += money.getAmmount();
		this->m_dollars += money.getDollars();
		this->m_cents += money.getCents();
		flag = false;
	}
}

/**
 * @brief withdraws money from the account if the money to be taken (in cents) is less than the ammount of money in the account.
 * @param money
 */
void Account::makeWithdrawals(Money money)
{

	if (money.getAmmount() > this->m_ammount)
	{
		flag = false;
		std::cout << "Not enough money \n";
	}
	else
	{
		flag = true;
		withdraws.push_back(money);
		this->m_ammount -= money.getAmmount();
		this->m_dollars -= money.getDollars();
		this->m_cents -= money.getCents();
		flag = false;
	}
}

std::stringstream string;
std::stringstream string2;

void Account::accToString()
{
	string << "Account details\n"
		   << "------------------ \n"
		   << "Current balance: $" << m_initial << "\n"
		   << "------------------ \n"
		   << "Number of deposits: " << deposits.size();

	std::string str = string.str();
	std::cout << str << std::endl;

	for (auto i = begin(deposits); i != end(deposits); i++)
	{
		std::cout << "(" << i - deposits.begin() + 1 << ") ";
		std::cout << *i << std::endl;
	}

	string2 << "------------------ \n"
			<< "Number of withdrawals: " << withdraws.size();

	std::string str2 = string2.str();
	std::cout << str2 << std::endl;
	for (auto i = begin(withdraws); i != end(withdraws); i++)
	{
		std::cout << "(" << i - withdraws.begin() + 1 << ") ";
		std::cout << *i << std::endl;
	}
}
