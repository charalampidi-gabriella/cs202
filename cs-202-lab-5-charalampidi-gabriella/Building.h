#ifndef DEMO_BUILDING
#define DEMO_BUILDING

#include <string>

class Building
{
    double m_squareFoot;
    int m_numStories;

public:
    // CONSTRUCTOR
    explicit Building(double squareFoot, int numStories);

    // SETTERS
    void setsquareFoot(double sqFoot);
    void setnumStories(int nStories);

    // GETTERS
    double getsquareFoot();
    int getnumStories();

    // DESTRUCTOR
    virtual ~Building();

protected:
    // ToString
    void buildingToString();
};

#endif