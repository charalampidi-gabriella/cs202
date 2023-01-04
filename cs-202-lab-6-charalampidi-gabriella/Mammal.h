#ifndef CS202_S22_LAB5_MAMMAL_H
#define CS202_S22_LAB5_MAMMAL_H
#include <string>

class Mammal {
protected:
    std::string name;
    std::string hairColor;

public:
    //constructor
    explicit Mammal(std::string nm, std::string color);

    // DESTRUCTOR
    virtual ~Mammal();
};


#endif //CS202_S22_LAB5_MAMMAL_H
