#include <iostream>

void say_age(int& age); // Passing Reference Declaration


int main(){
    
    int age{23}; // Local
    std::cout << "age (before call) : " << age << " &age : " << &age << std::endl; //23
    say_age(age); // Argument, no need to reference
    std::cout << "age (after call) : " << age << " &age : " << &age <<  std::endl; //24
    
    return 0;
}

void say_age(int& age){ // Parameter
    ++age; 
    std::cout <<  "Hello , you are " << age << " years old! &age : " << &age <<  std::endl;//24

}