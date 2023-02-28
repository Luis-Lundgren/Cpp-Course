#include <iostream>

int main(){
    
    //Capture everything by value
    /* 
     int c{42};
     // put in an "=" inside the []
     auto func = [=](){
         std::cout << "Inner value : " << c << std::endl;
     };
     
     for(size_t i{} ; i < 5 ;++i){
         std::cout << "Outer value : " << c << std::endl;
         func();
         ++c;
     }
     */

    //Capturing all by reference
    // put in an "&" inside the []
     int c{42};
     int d{5};
     // 
     auto func = [&](){
         std::cout << "Inner value(c) : " << c << std::endl;
         std::cout << "Inner value(d) : " << d << std::endl;
     };
     
     for(size_t i{} ; i < 5 ;++i){
         std::cout << "Outer value(c) : " << c << std::endl;
         func();
         ++c;
     }
    
    return 0;
}