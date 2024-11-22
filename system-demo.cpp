#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
//#include <vector>

int main(){ //CLI
    
    while(true){
        std::cout << "============================================\n";
        std::cout << "          The select course-system\n";
        std::cout << "============================================\n";
        std::cout << "1. Student\n";
        std::cout << "2. Teacher\n";
        std::cout << "3. Course\n";
        std::cout << "4. Save The Course selected record\n";
        std::cout << "5. Load The Course selected record\n";
        std::cout << "6. Exit The course-system\n";
        std::cout << "============================================\n";
        std::cout << "Enter your choice: ";
        int choice = 0;
        std::cin >> choice;
        std::cout << "Your choice is: " << choice << std::endl;
        if(choice == 6){
            exit(0);
        }
        std::cout << "============================================\n";
        std::cout << "Are you sure to continue with the selected? (y/n): ";
        char confirm = 'n';
        std::cin >> confirm;
        if(confirm == 'n'){
            break;
        }
        
    }

    
    
    
    
    

    return 0;
}
