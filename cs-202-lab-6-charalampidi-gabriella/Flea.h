#include <string>

#ifndef CS202_S22_LAB5_FLEA_H
#define CS202_S22_LAB5_FLEA_H


class Flea {
    std::string m_name;

public:
    //constructor
    explicit Flea(std::string nm);

    // DESTRUCTOR
    virtual ~Flea();
};


#endif //CS202_S22_LAB5_FLEA_H
