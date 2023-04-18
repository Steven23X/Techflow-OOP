#include <iostream>
#include "../Headers/TechFlow.hpp"
int main()
{
    /// Populating TechFlow Store
    TF_Vector<TF_Product *> TechFlow;
    TF_String name1("ASUS ROG Strix Z590-E");
    int price1 = 399;
    int slots1 = 4;
    TF_String processor_socket1 = "LGA 1200";
    TF_String chipset1 = "Intel Z590";
    TF_Product *product1 = new TF_MotherBoard(name1, price1, slots1, processor_socket1, chipset1);

    TF_String name2("MSI MPG B550 Gaming Edge WiFi");
    int price2 = 259;
    int slots2 = 4;
    TF_String processor_socket2 = "AM4";
    TF_String chipset2 = "AMD B550";
    TF_Product *product2 = new TF_MotherBoard(name2, price2, slots2, processor_socket2, chipset2);

    TF_String name3("Gigabyte B450 AORUS Pro Wi-Fi");
    int price3 = 129;
    int slots3 = 4;
    TF_String processor_socket3 = "AM4";
    TF_String chipset3 = "AMD B450";
    TF_Product *product3 = new TF_MotherBoard(name3, price3, slots3, processor_socket3, chipset3);

    TF_String name4("ASRock B550M-ITX/ac");
    int price4 = 169;
    int slots4 = 2;
    TF_String processor_socket4 = "AM4";
    TF_String chipset4 = "AMD B550";
    TF_Product *product4 = new TF_MotherBoard(name4, price4, slots4, processor_socket4, chipset4);

    TF_String name5("ASUS Prime Z590-P");
    int price5 = 209;
    int slots5 = 4;
    TF_String processor_socket5 = "LGA 1200";
    TF_String chipset5 = "Intel Z590";
    TF_Product *product5 = new TF_MotherBoard(name5, price5, slots5, processor_socket5, chipset5);

    TF_String name6("Gigabyte X570 AORUS Elite");
    int price6 = 199;
    int slots6 = 4;
    TF_String processor_socket6 = "AM4";
    TF_String chipset6 = "AMD X570";
    TF_Product *product6 = new TF_MotherBoard(name6, price6, slots6, processor_socket6, chipset6);

    TechFlow.pushback(product1);
    TechFlow.pushback(product2);
    TechFlow.pushback(product3);
    TechFlow.pushback(product4);
    TechFlow.pushback(product5);
    TechFlow.pushback(product6);

    for (int i = 0; i < 6; i++)
        std::cout << *TechFlow[i];

}
