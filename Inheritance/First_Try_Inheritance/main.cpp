#include <iostream>
#include "player.h"

int main(){

    Player p1("Fortnite");
    p1.set_first_name("john");
    p1.set_last_name("Snow");
    std::cout << "player : " << p1 << std::endl;


    return 0;
}