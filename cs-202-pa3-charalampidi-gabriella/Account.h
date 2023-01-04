#ifndef DEMO_ACCOUNT
#define DEMO_ACCOUNT
#include "Money.h"
#include <vector>

class Account : public Money
{
    //VECTORS TO HOLD DEPOSITS AND WITHDRAWALS
    std::vector<Money> deposits;
    std::vector<Money> withdraws;
    std::string m_initial;
    bool flag;

public:
    // CONSTRUCTOR
    explicit Account(int dollars, int cents);
    
    void makeDeposit(Money money);
    void makeWithdrawals(Money money);
    void print();
    void accToString();
    void size(Money vec);
};
#endif