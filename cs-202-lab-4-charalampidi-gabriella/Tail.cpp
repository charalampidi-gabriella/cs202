#include "Tail.h"

void Tail::startWagging()
{
    wagging = true;
    std::cout << "I am wagging" << std::endl;
}

void Tail::stopWagging()
{
    wagging = false;
    std::cout << "I am not wagging" << std::endl;
}

Tail::~Tail()
{
}