#include <iostream>
#include "Bathroom.h"

// sinks set
void Bathroom::setSinks(double sinks)
{
    m_sinks = sinks;
}

// sinks get
double Bathroom::getSinks()
{
    return m_sinks;
}

Bathroom::~Bathroom(){};