//
// Created by Keith Lancaster on 10/13/21.
//

#ifndef CODE2_DOG_H
#define CODE2_DOG_H


#include <string>
#include <iostream>
#include "Animal.h"

class Dog : public Animal,public Petable {
    std::string hairColor;
public:
    Dog(int age, const std::string &hairColor);
    void pet();
    friend std::ostream &operator<<(std::ostream &output, Dog &doggo);

};


#endif //CODE2_DOG_H
