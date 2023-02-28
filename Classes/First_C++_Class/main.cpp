#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder {


    // Function (methods)
    public :
        double volume(){
            return PI * base_radius * base_radius * height;
        }
    
    public:
        // Member Variables
        double base_radius{1};
        double height{1};

}; // don't forget the ";"


int main(){
    
    Cylinder cylinder1; // Objects
    std::cout << "volume : " << cylinder1.volume() << std::endl;
    // std::cout << "base_radius : " << cylinder1.base_radius << std::endl;
    // std::cout << "height : " << cylinder1.height << std::endl;

    //Change the member variables
    cylinder1.base_radius = 10;
    cylinder1.height = 3;

    std::cout << "volume : " << cylinder1.volume() << std::endl;

    cylinder1.height =8;

    std::cout << "volume : " << cylinder1.volume() << std::endl;
   
    return 0;
}