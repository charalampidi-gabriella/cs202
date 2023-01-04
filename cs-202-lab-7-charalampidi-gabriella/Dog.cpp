//
// Created by Keith Lancaster on 10/13/21.
//

#include "Dog.h"

Dog::Dog(int age, const std::string &hairColor) : Animal(age), hairColor(hairColor) {}
void Dog::pet()
{
    std::cout << "Wow, that is nice. Thanks. I really appreciate this" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Dog &doggo)
{

    os << "hair color: " << doggo.hairColor << std::endl;
    return os;
}
