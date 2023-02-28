#include <iostream>

int main(){
    
    
    // Declaring an Array
    // int scores[10]; // Junk data

    // Reading Values
    /* std::cout << std::endl;
    std:: cout << " scores [0] : " << scores[0] << std::endl;
    std:: cout << " scores [1] : " << scores[1] << std::endl; */

    //Read with a loop
    /* 
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
    */

    /* scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22; */

    // Write data in a loop
    /* for( size_t i {0} ; i < 10 ; ++i){
        scores[i] = i * 10;
    }

    // Print data out
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    } */

    // Declare and initialize data in a loop
    /*  
	double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};
	
	for(size_t i{0}; i < 5; ++i){
		std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
	}
   */    
    
    //If you don't initialize all the elements, those you leave out
    //are initialized to 0
    
    /* int families[5] {12, 7, 5};
	
	for(size_t i{0}; i < 5; ++i){
		std::cout << "families[" << i << "] : " << families[i] << std::endl;
	} */
   

   //Omit the size of the array at declaration
   
    /* int class_sizes[] {10,12,15,11,18,17,23,56}; 
	
	// Will print this with a range based for loop
	for(auto value : class_sizes){
		std::cout << "value : " << value << std::endl;
	} */

    // Read only arrays
   /* 
   const int birds[] {10,12,15,11,18,17,23,56}; 
   birds[2] = 8; 
   */


    int scores[] {2,5,8,2,5,6,9};
    int sum {0};
    
    for( int element : scores){
        sum += element;
    }
    std::cout << "Score sum : " << sum << std::endl;
   

    return 0;
}