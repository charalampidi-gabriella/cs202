
#ifndef CS202_S22_LAB5_HUMAN_H
#define CS202_S22_LAB5_HUMAN_H
#include <string>
#include <iostream>

#include <vector>
#include "Dog.h"
#include "Mammal.h"

class Human : public Mammal
{
    std::vector<Dog *> dogs;

public:
    explicit Human(std::string nm, std::string color);

    std::string getName();

    void addDog(Dog *dogName);

    int numDogs();

    void printDetails();

    // DESTRUCTOR
    virtual ~Human();
};

#endif // CS202_S22_LAB5_HUMAN_H
