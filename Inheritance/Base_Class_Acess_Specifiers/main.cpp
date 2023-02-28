#include <iostream>
#include "person.h"
#include "player.h"
#include "nurse.h"
#include "engineer.h"

int main(){

    Person person1("David Black", 37, "Red Sky ST 123 #77");
    
    std::cout << "person1 : " << person1 << std::endl;

    std::cout << "------------------" << std::endl;

    Player player;
    player.m_full_name = "Samuel Jackson";
    //player.m_age = 55; // Compier error
    //player.m_address = "2i892317322"; //Compiler error

    std::cout << "player : " << player << std::endl;

    std::cout << "------------------" << std::endl;

    Nurse nurse1;
    // nurse1.m_full_name = "Davy Johnes"; // Compiler error
    // nurse1.m_age = 51; // Compiler error
    std::cout << "nurse1 : " << nurse1 << std::endl;

    std::cout << "---------------" << std::endl;

    Engineer engineer1;

    // engineer1.m_full_name = "Olivier Godson"; // Compiler error
    // engineer1.m_age = 55; // Compiler error
    // engineer1.m_address = "dsakfd;aslfjd;laskf"; // Compiler error
    std::cout << "engineer1 : " << engineer1 << std::endl;
    return 0;
}