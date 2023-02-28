#include <iostream>
#include <String_view>

class Dog{
    public:
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int age_param);

        ~Dog(); // this is the destructor syntax, do not pass parameters

    private:
        std::string name;
        std::string breed;
        int * p_age{nullptr};

};



Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Dog constructor called for : " << name << std::endl;
}

Dog::~Dog(){
    delete p_age;
    std::cout << "Dog destructor called for : " << name << std::endl;
}
/* 
void some_func(Dog dog_param) // if you pass by value it may cuase some problems
{
    // Dog my_dog("Fluffy", "Shepherd", 2);

}
 */
void some_func(){
    
    Dog* p_dog = new Dog("Fluffy", "Shepherd", 2); // This creates a Dog obj on the heap

    delete p_dog; // Causes for the destructor of Dog to be called
}

int main(){

    Dog dog1("Dogyy1","Shepherd",2);
    Dog dog2("Dogyy2","Shepherd",3);
    Dog dog3("Dogyy3","Shepherd",5);
    Dog dog4("Dogyy4","Shepherd",1);

    std::cout << "Done!" << std::endl;

    return 0;
}