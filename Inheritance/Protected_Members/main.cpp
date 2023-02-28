#include <iostream>
#include "player.h"

int main(){

    Player p1("Fortnite", "Teddy", "Rooselvelt");
    // p1.first_name = "David"; // Compile Error
    std::cout << "player : " << p1 << std::endl;


    return 0;
}