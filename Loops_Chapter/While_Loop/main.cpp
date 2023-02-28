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
    
    const unsigned int COUNT {10}; // Convention dictates that capital letters are for constants

    unsigned int i {0};

    while ( i < COUNT ){
        std::cout << i <<"  : I love C++" << std::endl;
        ++i; // Incrementation is very important
    }
    std::cout << "While Loop Done!" << std::endl;
    
    return 0;
}