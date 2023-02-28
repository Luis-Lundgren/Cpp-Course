#include <iostream>

int main(){


    //Print I love C++ 10 times the wrong way!

    /* std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl; */
    
    const int COUNT {0}; // Convention dictates that capital letters are for constants

    size_t i {0};

    do{
        std::cout << "[" << i << "]" << " : I love C++" << std::endl;
        ++i;
    } while ( i < COUNT );
    std::cout << "Loop done!" << std::endl;

    return 0;
}