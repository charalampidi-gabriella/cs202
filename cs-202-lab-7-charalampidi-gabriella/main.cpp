#include <iostream>
#include "Dog.h"
#include "Cat.h"

#include <vector>
int main()
{
    // part 3
    std::vector<Dog> dogs;
    Dog dog4(4, "black");
    dogs.push_back(dog4);
    Dog dog5(10, "white");
    dogs.push_back(dog5);
    Dog dog6(6, "charcoal");
    dogs.push_back(dog6);

    for (Dog dog : dogs)
    {
        std::cout << dog;
    }
    return 0;
}
