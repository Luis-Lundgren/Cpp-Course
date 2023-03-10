#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

void draw_shape(Shape * s){
    s->draw();
}

void draw_shape_v1(const Shape& s_r){
    s_r.draw();
}


int main(){

    Shape shape1("Shape1");
    // shape1.draw();

    Oval oval1(2.0,3.5,"Oval1");
    // oval1.draw();

    Circle circle1(3.3,"Circle1");
    // circle1.draw();

    //Base pointers
    Shape * shape_ptr = &shape1;
    // shape_ptr->draw();

    shape_ptr = &oval1;
    // shape_ptr->draw(); // Draw an oval

    shape_ptr = &circle1;
    // shape_ptr->draw(); // Circle::draw()

     //Base references
    // Shape& shape_ref = shape1;
    Shape& shape_ref = circle1;
    // Shape& shape_ref = oval1;
    // shape_ref.draw();

    //Drawing shapes
    // draw_shape(&circle1);
    // draw_shape(&oval1);
    // draw_shape_v1(circle1);
    // draw_shape_v1(shape1);
    // draw_shape_v1(oval1);

    //Raw pointers
    shape_ptr  = &oval1;
    // shape_ptr->get_x_rad(); // Not going to work

    //Shapes stored in collections
    Shape* shape_collection[]{&shape1,&oval1,&circle1};
	 
	 for(Shape* s_ptr : shape_collection){
        s_ptr->draw();
    }

    return 0;
}