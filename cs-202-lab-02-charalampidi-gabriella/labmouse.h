#include <string>
#ifndef DEMO_LABMOUSE_H
#define DEMO_LABMOUSE_H

class LabMouse
{

private:
    std::string m_name = "";
    int m_age = 1;

public:
    ///////////////////CONSTRUCTORS//////////////////
    explicit LabMouse();
        explicit LabMouse(const std::string &name, int age);
    //////////////////DESTRUCTOR///////////////////////
    virtual ~LabMouse();

public:
    ////////////////////////MAIN NETHODS///////////////////////
    void speak();
    void sayHello();
};

#endif // DEMO_LABMOUSE_H
