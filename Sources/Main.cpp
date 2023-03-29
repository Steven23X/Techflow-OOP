#include <iostream>
#include "../Headers/TechFlow.hpp"
int main()
{
    /// Populating TechFlow Store
    TF_Vector<TF_Product> TechFlow;

    TF_String type2("Motherboard");
    TF_String name2("ASUS ROG Strix Z590-E");
    int price2 = 399;
    TF_Product prod2(name2, type2, price2);

    TF_String type3("Graphics Card");
    TF_String name3("MSI GeForce RTX 3080 Ti Gaming X Trio");
    int price3 = 1499;
    TF_Product prod3(name3, type3, price3);

    TF_String type4("Processor");
    TF_String name4("Intel Core i9-12900K");
    int price4 = 629;
    TF_Product prod4(name4, type4, price4);

    TF_String type5("Power Supply");
    TF_String name5("Corsair RM850x");
    int price5 = 139;
    TF_Product prod5(name5, type5, price5);

    TechFlow.pushback(prod2);
    TechFlow.pushback(prod3);
    TechFlow.pushback(prod4);
    TechFlow.pushback(prod5);

    std::cout<<TechFlow;
}
