#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

//Engineer is doing private inheritance

class Engineer : private Person
{
friend std::ostream& operator<<(std::ostream& out , const Engineer& operand);
    public:
    Engineer();
    ~Engineer();
    
    void build_something(){
        m_full_name = "John Snow"; // OK
        m_age = 23; // OK
        //
        //m_address = "897-78-723"; Compiler error
    }
    // this below is the resurecting option
    public : 
        using Person::add;
    // This is going to be confusing. So this is just an option
    protected : 
        using Person::get_full_name;
        using Person::get_age;
        using Person::get_address;
        // Don't try to resurect something that was declared as Private in the Parent Class (i.e Person:: private:)
        // using Person::m_address; // Compiler error

    int get_contract_count() const{
        return contract_count;
    }
    
private : 
    int contract_count{0};
};

#endif // ENGINEER_H