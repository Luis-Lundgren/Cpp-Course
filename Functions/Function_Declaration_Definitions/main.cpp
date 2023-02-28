#include <iostream>


int max(int , int ); // Function declaration also called a "prototype"
                        // Signature doesn't include return type

int min(int , int );

int inc_mult( int , int );

int main(){
    
    int x {5};
    int y{12};

    int result = max(x,y);
    std::cout << "max : " << result << std::endl;

    int result1 = min(x,y);
    std::cout << "max : " << result1 << std::endl;

    result =inc_mult(x,y);
    std::cout << "result : " << result << std::endl;
    
    return 0;
}

//Function definition. Shows up after main 
int max(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}

int min(int a, int b){
    if(a < b)
        return a;
    else
        return b;
}

int inc_mult( int a, int b){
    return ( (++a)*(++b));
}
