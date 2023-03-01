#include <iostream>
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main(){


    Circle circle1(7.2,"circle1");
    Oval oval1(13.3,1.2,"Oval1");

    /* 
    oval1.draw();
    oval1.draw(33);

    circle1.draw();
    circle1.draw(44);
    */

    Shape * shape_ptr = new Circle(10,"Circle1");
    shape_ptr->draw(45,"Red");

    return 0;
}