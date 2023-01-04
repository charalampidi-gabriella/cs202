#ifndef DEMO_MONEY
#define DEMO_MONEY
#include <iostream>

class Money {
    
    protected:
    double m_ammount;
    int m_cents;
    int m_dollars;

    public:
    //CONSTRUCTORS
    explicit Money(int dollars, int cents);
    Money();
       

    //OPERATORS OVERLOAD
    friend std::ostream& operator<< (std::ostream& out, const Money& money);
    Money operator+(const Money&)const;
    Money operator-(const Money&)const;
    bool  operator <(const Money obj) ;
    bool  operator >(const Money obj) ;
    bool  operator >=(const Money obj) ;
    bool  operator <=(const Money obj) ;
    bool operator !=(const Money obj) ;
    bool operator ==(const Money obj) ;

    //GETTERS
    double getAmmount();
    int getDollars();
    int getCents();
};

#endif