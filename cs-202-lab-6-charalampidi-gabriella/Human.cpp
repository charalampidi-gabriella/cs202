#include "Human.h"
#include "Dog.h"

/**
 * @param nm name of Human (uses constructor of mammal)
 * @param color hair color of Human (uses constructor of mammal)
 */
Human::Human(std::string nm, std::string color) : Mammal(nm, color)
{
}

/**
 * adds the dog to the dogs vector of Human
 * @param dogToAdd name of dog to add
 */
void Human::addDog(Dog *dogToAdd)
{
    dogs.push_back(dogToAdd);
}

/**
 * @return the number of dogs a human has
 */
int Human::numDogs()
{
    return dogs.size();
}

/**
 * print details about a human
 */
void Human::printDetails()
{
    std::cout << "Name: " << Mammal::name << std::endl;
    std::cout << Mammal::name << " has " << numDogs() << " dog(s)" << std::endl;
    for (auto &&dog : dogs)
    {
        dog->dogDetails();
    }
}

Human::~Human(){};