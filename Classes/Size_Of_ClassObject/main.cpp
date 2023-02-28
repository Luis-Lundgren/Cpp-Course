#include <iostream>

class Dog{
    public:
        Dog() = default;
        void print_info(){

        }
        void do_somehting(){

        }
    
    private:
        size_t leg_count; // 8
        size_t arm_count; // 8
        int * p_age; // 8
};

int main(){

    Dog dog1;
    std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;
    std::cout << "sizeof(int*) : " << sizeof(int*) << std::endl;
    // std::cout << "sizeof(Dog) : " << sizeof(Dog) << std::endl;
    std::cout << "sizeof(Dog) : " << sizeof(dog1) << std::endl;

    std::string name{"You are amazing and awesome!"};
    std::cout << "sizeof(name) : " << sizeof(name) << std::endl;

    return 0;
}