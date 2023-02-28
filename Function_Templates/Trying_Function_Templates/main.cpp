#include <iostream>
#include <string>

template <typename T>
T maximum(T a, T b){
        return (a>b)? a : b;
    }
/* 
template <typename T>
T multiply( T a, T b){
    return a * b;
}
 */

int main(){
    
    // double x{5.1};
    // double y{7.7};
    // std::string x{"Hello"};
    // std::string y{"World"};
    
    int x{5};
    int y{7};

    int* p_x{&x};
    int* p_y{&y};
    // auto result = multiply(x,y);
    // auto result = maximum(x,y);
    auto result = maximum(p_x,p_y);
    std::cout << "result : " << result << std::endl;

    return 0;
}