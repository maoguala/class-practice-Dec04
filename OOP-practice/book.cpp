#include "iostream"

// Define a class named 'book'
class book {
public: 
    std::string Kind_A, Kind_B, Kind_C; // Public member variables representing different kinds of books
};

int main() {
    book kind_on_bookshelf; // Create an instance of the 'book' class
    kind_on_bookshelf.Kind_A = "amusement"; // Assign a value to the 'Kind_A' attribute
    
    
    std::cout << "Kind_A: " << kind_on_bookshelf.Kind_A << std::endl;// Output the value of 'Kind_A' to verify it is set correctly
    return 0;
}
