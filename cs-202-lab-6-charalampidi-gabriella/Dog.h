//
// Created by Keith Lancaster on 3/2/22.
//


#ifndef CS202_S22_LAB5_DOG_H
#define CS202_S22_LAB5_DOG_H
#include <string>
#include <vector>
#include "Flea.h"
#include "Mammal.h"

class Dog : public Mammal {
    std::vector<Flea*> fleas;
    std::string m_name;
    std::string m_hairColor;

    public:

    //constructor
    explicit Dog(std::string name,std::string color);

    void addFlea(Flea* fleaName);

    void scratch();

    int numFleas();

    void dogDetails();
     
    // DESTRUCTOR
    virtual ~Dog();
};




#endif //CS202_S22_LAB5_DOG_H
