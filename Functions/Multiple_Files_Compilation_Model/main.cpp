#include <iostream>
#include "compare.h" // Prepocessor, the header contains the definitions
#include "operations.h"


int main(){
    
    int maximum = max(134,56);
    std::cout << "max : " << maximum << std::endl;

    int minimum = min(146,23);
    std::cout << "min : " << minimum << std::endl;

    int x{4}; // 5
    int y{5}; // 6

    int result = inc_mult(x,y);
    std::cout << "result : " << result << std::endl;
    
    return 0;
}

