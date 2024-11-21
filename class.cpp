#include <iostream>
#include <string>

class Person{
    public:
        std::string id = "4B3G0123";
        std::string lastName = "Danny";
        std::string firstName = "Huang";
        std::string gender = "Man";
        std::string birthDate = "1999-01-01";
};

int main(){
        Person student; // Create an object of Person.
        
        // Access attributes and set values.
        std::cout << student.id << std::endl;
        std::cout << student.lastName << std::endl;
        std::cout << student.firstName << std::endl;
        std::cout << student.gender << std::endl;
        std::cout << student.birthDate << std::endl;
}