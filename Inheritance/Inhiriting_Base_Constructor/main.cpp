#include <iostream>
#include "person.h"
#include "engineer.h"

int main(){
    
	Engineer eng1("Daniel Gray",23,"asdl;fkjdas;fkdas;fk",45);
	// Engineer eng1;
	std::cout << "eng1 : " << eng1 << std::endl;
	
    return 0;
}