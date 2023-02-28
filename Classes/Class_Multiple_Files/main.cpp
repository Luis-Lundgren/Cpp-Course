#include <iostream>
// #include "constants.h" // Don't include definitions twice unless you have include guards
#include "cylinder.h"



int main(){

    Cylinder cylinder1(10,10);
    std::cout << "volume : " << cylinder1.volume() << std::endl;

    return 0;
}