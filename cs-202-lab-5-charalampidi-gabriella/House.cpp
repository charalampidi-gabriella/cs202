#include <iostream>
#include "House.h"

// CONSTRUCTOR
House::House(double squareFoot, int numStories, int numBedrooms, bool garage, int maxOccup, int sinks) : Building(squareFoot, numStories), m_bedrooms(numBedrooms), m_garage(garage), m_maxOccupancy(maxOccup)
{
    bathroom.setSinks(sinks);
}

void House::printAttributes()
{
    std::string garage;
    std::cout << "*** Building ***" << std::endl;
    buildingToString();
    std::cout << "\n";
    std::cout << "*** House ***" << std::endl;
    std::cout << "Number of Bedrooms: " << m_bedrooms << std::endl;
    std::cout << "Has Garage: ";
    if (m_garage == 1)
    {
        garage = "yes";
    }
    else
    {
        garage = "no";
    }
    std::cout << garage << std::endl;
    std::cout << "Maximum Occupancy: " << m_maxOccupancy << std::endl;
    std::cout << "Sinks in Bathroom: " << bathroom.getSinks() << std::endl;
}

House::~House(){};
