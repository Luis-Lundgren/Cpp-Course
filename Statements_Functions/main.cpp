#include <iostream>

//Function that multiples 2 numbers

int addNumbers(int first_param,int second_param){
    int sum = first_param + second_param;
    return sum;
}

int main(int argc, char **argv)
{
    int first_number {13}; //statement
    int second_number {7};

    std::cout << "First number : " << first_number << std::endl;
    std::cout << "Second number : " << second_number << std::endl;
    
    // int firstNumber = 12;
    // int secondNumber = 9;

    int sum = first_number + second_number;

    std::cout << "The sum of the two number is : " << sum << std::endl;

    sum = addNumbers(first_number,second_number);
    std::cout << "The sum of the two number is : " << sum << std::endl;

    sum = addNumbers(34,7);
    
    std::cout << "The sum of the two number is : " << sum << std::endl;
    std::cout << "The sum of the two number is : " << addNumbers(23,8) << std::endl;
    return 0;
}

