#include <iostream>

int main(){

    int max{};

    int a{35};
    int b{200};

    std::cout << std::endl;
    std::cout << "using regular if " << std::endl;

    /* if(a >  b){
        max = a;
    }else{
        max = b;
    } */

    auto max1 = (a > b) ? a : 22.5f; // ternary operator

    std::cout << "max1 : " << max1 << std::endl;

    return 0;
}