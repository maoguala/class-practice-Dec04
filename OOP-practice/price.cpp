#include <iostream>

class menu{
    public:
    std::string coffee, milk, tea;
};

int output(std::string final_sel){

    if(final_sel == "coffee"){
        std::cout << "20$ \n";
    }else if(final_sel == "milk"){
        std::cout << "40$ \n";
    }else if(final_sel == "tea"){
        std::cout << "10$ \n";
    }
    return 0;
}
int main(){
    menu order;
    order.coffee = "coffee";
    order.milk = "milk";
    order.tea = "tea";
    std::string sel;
    std::cout << "------\ncoffee\nmilk\ntea\n------\nPlease enter your choise:\n------\n";
    std::cin >> sel;
    return output(sel);
}