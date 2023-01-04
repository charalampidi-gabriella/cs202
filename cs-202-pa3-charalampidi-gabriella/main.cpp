#include <iostream>
#include "Money.h"
#include "Account.h"
#include <iomanip>

int main()
{
    //NEW ACCOUNT
    auto acc = new Account(300, 23);

    //NEW MONEY TO BE DEPOSITED
    auto dep1 = new Money(200, 00);
    auto dep2 = new Money(300, 24);
    auto dep3 = new Money(501, 22);

    //DEPOSITS MADE
    acc->makeDeposit(*dep1);
    acc->makeDeposit(*dep2);
    acc->makeDeposit(*dep3);

    
    //NEW MONEY TO BE WITHDRAWED
    auto withdraw1 = new Money(300, 10);
    auto withdraw2 = new Money(201, 34);

    //WITHDRAWS MADE
    acc->makeWithdrawals(*withdraw1);
    acc->makeWithdrawals(*withdraw2);

    //PRINT DETAILS
    acc->accToString();
    std::cout << "Final balance: " << *acc << "\n\n";


    //OPERATOR TESTING
    std::cout << "Let's test our operators:" << std::endl;
    std::cout << "--------------------------" << std::endl;

    Money test1(350, 75);
    Money test2(20, 25);
    Money test3(350, 75);
    Money test4(20, 25);

    if (test1 > test2)
    {
        std::cout << "Operator '>' works" << std::endl;
    };
    if (test2 < test1)
    {
        std::cout << "Operator '<' works" << std::endl;
    };
    if (test1 == test3)
    {
        std::cout << "Operator '==' works" << std::endl;
    };
    if (test1 != test2)
    {
        std::cout << "Operator '!=' works" << std::endl;
    };
    if (test1 >= test2)
    {
        std::cout << "Operator '>=' works (> part)" << std::endl;
    }
    if (test1 >= test3)
    {
        std::cout << "Operator '>=' works (= part)" << std::endl;
    }
    if (test2 <= test1)
    {
        std::cout << "Operator '<=' works (< part)" << std::endl;
    }
    if (test2 <= test4)
    {
        std::cout << "Operator '>=' works (= part)" << std::endl;
    }
}