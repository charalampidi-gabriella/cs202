#ifndef DEMO_
#define DEMO_

#include <string>

class Bathroom
{
    int m_sinks;

public:
    // SETTERS
    void setSinks(double sinks);
    // GETTERS
    double getSinks();
    // DESTRUCTOR
    virtual ~Bathroom();
};

#endif