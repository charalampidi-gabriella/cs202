#include <iostream>
#include "Building.h"
#include <sstream>

// CONSTRUCTOR
Building::Building(double squareFoot, int numStories)
{
    m_squareFoot = squareFoot;
    m_numStories = numStories;
}

// sq ft set
void Building::setsquareFoot(double sqFoot)
{
    m_squareFoot = sqFoot;
}

// sq ft get
double Building::getsquareFoot()
{
    return m_squareFoot;
}

// num stories get
int Building::getnumStories()
{
    return m_numStories;
}

// num stories get
void Building::setnumStories(int numSt)
{
    m_numStories = numSt;
}

// ToString
std::stringstream string;

void Building::buildingToString()
{
    string << "Square Footage: " << m_squareFoot << "\n"
           << "Number of Stories: " << m_numStories;
    std::string str = string.str();
    std::cout << str << std::endl;
}

Building::~Building(){};