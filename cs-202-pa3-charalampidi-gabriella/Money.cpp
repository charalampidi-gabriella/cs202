#include "Money.h"
#include <iomanip>
#include <cmath>
Money::Money(){};

// CONSTRUCTOR
/*example1: 20d,2c.
m_dollars = 20  +  0.02 = 20
m_cents = 2 % 100 = 02

example2: 130d,125c
m_dollars = 130 +  1.25 = 131
m_cents = 125 % 100 = 25
*/
Money::Money(int dollars, int cents)
{
    m_dollars = dollars + cents / 100;
    m_cents = (cents) % 100;
    m_ammount = (dollars + cents * 0.01); // adds up dollars and cents (used only to compare)
}

// GETTERS
double Money::getAmmount()
{
    return m_ammount;
}
int Money::getDollars()
{
    return m_dollars;
}
int Money::getCents()
{
    return m_cents;
}

// OPERATORS OVERLOAD
std::ostream &operator<<(std::ostream &out, const Money &money)
{
    out << "$" << money.m_dollars << ".";
    out << std::setw(2) << std::setfill('0') << money.m_cents;
    return out;
}
Money Money::operator+(const Money &obj) const
{
    int totDollars;
    int totCents;

    totDollars = obj.m_dollars + m_dollars;
    totCents = obj.m_cents + m_cents;

    Money sum = Money(totDollars, totCents);
    return sum;
}
Money Money::operator-(const Money &obj) const
{
    int totDollars;
    int totCents;

    totDollars = obj.m_dollars - m_dollars;
    totCents = obj.m_cents - m_cents;

    Money diff = Money(totDollars, totCents);
    return diff;
}
bool Money::operator<(const Money obj)
{
    if (m_ammount < obj.m_ammount)
    {
        return true;
    }
    else
    {
        return false;
    }
};
bool Money::operator>(const Money obj)
{
    if (m_ammount > obj.m_ammount)
    {
        return true;
    }
    else
    {
        return false;
    }
};
bool Money::operator>=(const Money obj)
{
    if (m_ammount > obj.m_ammount)
    {
        return true;
    }
    if (m_ammount == obj.m_ammount)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Money::operator<=(const Money obj)
{
    if (m_ammount < obj.m_ammount)
    {
        return true;
    }
    if (m_ammount == obj.m_ammount)
    {
        return true;
    }
    else
    {
        return false;
    }
};
bool Money::operator!=(const Money obj)
{
    if (m_ammount != obj.m_ammount)
    {
        return true;
    }
    else
    {
        return false;
    }
};
bool Money::operator==(const Money obj)
{
    if (m_ammount == obj.m_ammount)
    {
        return true;
    }
    else
    {
        return false;
    }
}
