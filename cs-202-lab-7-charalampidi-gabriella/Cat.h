//
// Created by Keith Lancaster on 10/13/21.
//

#ifndef CODE2_CAT_H
#define CODE2_CAT_H


#include <iostream>
#include "Animal.h"

class Cat : public Animal,public Petable {
    std::string breed;
public:
    Cat(int age, const std::string &breed) : Animal(age), breed(breed) {}
    void pet();
};


#endif //CODE2_CAT_H
