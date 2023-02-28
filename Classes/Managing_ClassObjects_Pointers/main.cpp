#include <iostream>
#include "cylinder.h"



int main(){

    Cylinder cylinder1(10,10);
    std::cout << "volume : " << cylinder1.volume() << std::endl;


    // Managing a stack of objects through pointers
    Cylinder* p_cylinder1 = &cylinder1;
    // std::cout << "volume : " << (*p_cylinder1).volume() << std::endl; // this is ugly use the one below
    std::cout << "volume : " << p_cylinder1->volume() << std::endl;

    // Create a cylinder heap object through the new operator
    Cylinder* p_cylinder2 = new Cylinder(100,2); // Heap

    std::cout << "volume(p_cylinder2) : " << p_cylinder2->volume() << std::endl;
    std::cout << "base_radius(p_cylinder2) : " << p_cylinder2->get_base_radius() << std::endl;

    delete p_cylinder2; // always free the memory
    return 0;
}