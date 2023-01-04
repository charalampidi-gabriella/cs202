#ifndef DEMO_DOG
#define DEMO_DOG

#include <string>
#include "Tail.h"

class Dog
{
    std::string m_name;
    bool happy = false;
    Tail tail;

public:
    explicit Dog(const std::string &name);
    void printName();
    void areYouHappy();
    void hereIsFood();
    void noSoupForYou();
    virtual ~Dog();
};

#endif