
#include <iostream>
#include "Cat.h"

Cat::Cat(const std::string &breed):m_breed{breed}{

}

void Cat::speak() {
    std::cout << "Meow!" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
}

void Cat::setBreed(std::string breed) {
    m_breed = breed;
}

void Cat::printBreed() {
   std::cout << "Cat breed: " << m_breed << std::endl;
}

