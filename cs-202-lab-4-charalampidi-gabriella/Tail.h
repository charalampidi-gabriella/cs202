#ifndef DEMO_TAIL
#define DEMO_TAIL

#include <iostream>

class Tail
{
    bool wagging = false;

public:
    void startWagging();
    void stopWagging();

    virtual ~Tail();
};

#endif
