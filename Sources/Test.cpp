/*#include <iostream>
#include "../Headers/TechFlow.hpp"
#include <string>
int main()
{
    /// TF_Customer class testing:

    /*TF_Customer a;
    std::cin>>a;
    TF_Customer b(a);
    std::cout<<b;
    */

    /// TF_Product class testing:

    /*
    TF_Product a;
    std::cin >> a;
    TF_Product b(a);
    std::cout << b;
    std::cout << std::endl;
    b.discount(20);
    a.discount(0.2);
    std::cout << b;
    std::cout << std::endl;
    std::cout << a;
    */

    /// TF_Order + TF_Vector class testing;
    
    /*
    TF_Customer b;
    std::cin >> b;
    std::cout << b;
    TF_Vector<TF_Product> vec;
    int n = 2;
    TF_String name("Video Card");
    TF_String type("GTX 234");
    TF_Product prod1(name, type, 278);
    TF_Product prod2(name, type, 100);
    vec.pushback(prod1);
    vec.pushback(prod2);
    std::cout << vec;
    TF_Order a(b, vec, "hello");
    std::cout << a;
    std::cout << a.orderTotal();
    std::cout << a.addCharge(0.2);
    */

    /*
    TF_String a, b, c;
    int d;
    std::cin >> a;
    std::cin >> b;
    std::cin >> d;
    std::cin>>c;
    std::cout << a << b << c << d;
    */

    /// OLD MAIN
    /// Populating TechFlow Store
    /*TF_Vector<TF_Product> TechFlow;

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

    TF_String type6("RAM");
    TF_String name6("G.Skill Ripjaws V DDR4-3600 CL16");
    int price6 = 109;
    TF_Product prod6(name6, type6, price6);

    TF_String type7("SSD");
    TF_String name7("Samsung 970 EVO Plus 1TB NVMe SSD");
    int price7 = 169;
    TF_Product prod7(name7, type7, price7);

    TF_String type8("Cooler");
    TF_String name8("Noctua NH-D15");
    int price8 = 99;
    TF_Product prod8(name8, type8, price8);

    TF_String type9("Monitor");
    TF_String name9("ASUS TUF Gaming VG27AQ1A");
    int price9 = 449;
    TF_Product prod9(name9, type9, price9);

    TF_String type10("Case");
    TF_String name10("Fractal Design Meshify C");
    int price10 = 89;
    TF_Product prod10(name10, type10, price10);

    TF_String type11("Headphones");
    TF_String name11("Bose QuietComfort 35 II");
    int price11 = 299;
    TF_Product prod11(name11, type11, price11);

    TF_String type12("Keyboard");
    TF_String name12("Logitech G915 TKL");
    int price12 = 229;
    TF_Product prod12(name12, type12, price12);

    TF_String type13("Mouse");
    TF_String name13("Razer DeathAdder Elite");
    int price13 = 69;
    TF_Product prod13(name13, type13, price13);

    TF_String type14("Smartphone");
    TF_String name14("Samsung Galaxy S21 Ultra");
    int price14 = 1199;
    TF_Product prod14(name14, type14, price14);

    TF_String type15("Fitness Tracker");
    TF_String name15("Fitbit Charge 5");
    int price15 = 179;
    TF_Product prod15(name15, type15, price15);

    TechFlow.pushback(prod2);
    TechFlow.pushback(prod3);
    TechFlow.pushback(prod4);
    TechFlow.pushback(prod5);
    TechFlow.pushback(prod6);
    TechFlow.pushback(prod7);
    TechFlow.pushback(prod8);
    TechFlow.pushback(prod9);
    TechFlow.pushback(prod10);
    TechFlow.pushback(prod11);
    TechFlow.pushback(prod12);
    TechFlow.pushback(prod13);
    TechFlow.pushback(prod14);
    TechFlow.pushback(prod15);

    // Interactive Menu

    std::cout << "Enter Personal Information:" << std::endl;
    std::cout << std::endl;

    TF_Customer customer;
    std::cin >> customer;

    std::cout << std::endl;
    std::cout << "TechFlow Store:" << std::endl;
    std::cout << std::endl;
    std::cout << TechFlow << std::endl;

    std::cout << "How many products you want to buy?" << std::endl;
    int number_of_products, index;
    std::cin >> number_of_products;
    TF_Vector<TF_Product> order_products;
    std::cout << std::endl;
    std::cout << "Enter index of products:" << std::endl;

    for (int i = 0; i < number_of_products; i++)
    {
        std::cin >> index;
        order_products.pushback(TechFlow[index - 1]);
    }

    std::cout << std::endl;
    TF_Order order(customer, order_products, "31.03.2023");
    std::cout << order;
    std::cout << std::endl;
    std::cout << "Total:" << std::endl;
    std::cout << order.orderTotal() << "$" << std::endl;
    std::cout << std::endl;
    std::cout << "Total after TVA:" << std::endl;
    std::cout << order.addCharge(0.02) << "$" << std::endl;
    std::cout << std::endl;
    std::cout << "Budget after order:" << std::endl;
    std::cout << order.verifyBudget(order.addCharge(0.02));
    std::cout << std::endl;

    std::cout << "Write your own product:" << std::endl;
    TF_Product myproduct;
    std::cin >> myproduct;
    std::cout << myproduct;

    TF_String x("a");
    TF_String y("b");
    TF_MotherBoard a(x, 12, 123, x, y);
    std::cout << a;
    */
