#include <iostream>
#include "Dog.h"

Dog::Dog(const std::string &name)
{
    m_name = name;
}

void Dog::printName()
{
    std::cout << m_name << std::endl;
}

Dog::~Dog()
{
}

void Dog::hereIsFood()
{
    happy = true;
    tail.startWagging();
    std::cout << "I love this food" << std::endl;
}

void Dog::noSoupForYou()
{
    happy = false;
    tail.stopWagging();
    std::cout << "I am not happy" << std::endl;
}

void Dog::areYouHappy()
{
    if (happy == true)
    {
        std::cout << "Yes, I am happy" << std::endl;
    }
    else
    {
        std::cout << "No, I am not happy" << std::endl;
    }
}