#include <iostream>
#include "Cat.h"
#include "labmouse.h"

int main()
{
    std::cout << "Hello, Cat Lovers!" << std::endl;
    Cat cat("Persian");
    cat.printBreed();
    cat.speak();

    // INSTANTIATE MOUSE  1
    LabMouse mouse;
    
    mouse.sayHello();
    mouse.speak();

    // INSTANTIATE MOUSE  2
    LabMouse mouse2("The Brain" , 2);
    mouse2.sayHello();

    return 0;
}
