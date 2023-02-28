#include <iostream>

class Dog{
    // public: // can be used to make members public in a class
        std::string m_name; // Members of class are going to be private by default
};

struct Cat
{
    public:
        std::string m_name; // Members of struct are going to be public by default
};

struct Point{
    double x;
    double y;
};

void print_point(const Point& point){
    std::cout << "Point [ x : " << point.x << " , y : " << point.y << " ]" << std::endl;
}

int main(){

    Dog dog1;
    Cat cat1;

    // dog1.m_name = "Fluffy"; // Compiler Error
    cat1.m_name = "Snowy";

    // std::cout << dog1.m_name << std::endl;
    std::cout << cat1.m_name << std::endl;

    Point point1;
    point1.x = 10;
    point1.y = 55.5;

    print_point(point1);

    point1.x = 40.4;
    point1.y = 2.7;

    print_point(point1);

    return 0;
}