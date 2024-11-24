#include <iostream>
//#include <string>

class cake_kind{ //The class of cakes
    public:
    std::string Tiramisu = "Tiramisu", Matcha_Mille_Feuille = "Matcha_Mille_Feuille", Honey_cake = "Honey_cake";
};

int main() {
    cake_kind cake; //Object of cake
    std::cout << cake.Tiramisu << std::endl;
    std::cout << cake.Matcha_Mille_Feuille << std::endl;
    std::cout << cake.Honey_cake << std::endl;
}