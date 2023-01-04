#ifndef DEMO_HOUSE
#define DEMO_HOUSE

#include <string>
#include "Building.h"
#include "Bathroom.h"

class House : public Building
{
    int m_bedrooms;
    bool m_garage;
    int m_maxOccupancy;
    Bathroom bathroom;

public:
    // CONSTRUCTOR
    explicit House(double squareFoot, int numStories, int numBedrooms, bool garage, int maxOccup, int sinks);

    // ToString
    void printAttributes();

    // DESTRUCTOR
    virtual ~House();
};

#endif