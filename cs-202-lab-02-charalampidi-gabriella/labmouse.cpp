#include <iostream>
#include "labmouse.h"

///////////////////CONSTRUCTORS//////////////////

LabMouse ::LabMouse()
{
    m_name = "Pinky";
}

LabMouse::LabMouse(const std::string &name, int age) : m_name{name}
{
    m_name = name;
    m_age = age;
};


//////////////////////MAIN METHODS/////////////////////
void LabMouse::speak()
{
    std::cout << "Narf!" << std::endl;
}

void LabMouse::sayHello()
{
    std::cout << "Mouse name: " << m_name << std::endl
              << "Mouse age: " << m_age << std::endl;
}

//////////////////DESTRUCTOR///////////////////////
LabMouse::~LabMouse()
{
    std::cout << "Mouse destructor" << std::endl;
}