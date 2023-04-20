#include <iostream>
#include <string>
#include <limits>
#include <memory>
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
    std::unique_ptr<TF_Product> product1 = std::make_unique<TF_MotherBoard>(name1, price1, slots1, processor_socket1, chipset1);

    TF_String name2("MSI MPG B550 Gaming Edge WiFi");
    int price2 = 259;
    int slots2 = 4;
    TF_String processor_socket2 = "AM4";
    TF_String chipset2 = "AMD B550";
    std::unique_ptr<TF_Product> product2 = std::make_unique<TF_MotherBoard>(name2, price2, slots2, processor_socket2, chipset2);

    TF_String name3("Gigabyte B450 AORUS Pro Wi-Fi");
    int price3 = 129;
    int slots3 = 4;
    TF_String processor_socket3 = "AM4";
    TF_String chipset3 = "AMD B450";
    std::unique_ptr<TF_Product> product3 = std::make_unique<TF_MotherBoard>(name3, price3, slots3, processor_socket3, chipset3);

    TF_String name4("ASRock B550M-ITX/ac");
    int price4 = 169;
    int slots4 = 2;
    TF_String processor_socket4 = "AM4";
    TF_String chipset4 = "AMD B550";
    std::unique_ptr<TF_Product> product4 = std::make_unique<TF_MotherBoard>(name4, price4, slots4, processor_socket4, chipset4);

    TF_String name5("ASUS Prime Z590-P");
    int price5 = 209;
    int slots5 = 4;
    TF_String processor_socket5 = "LGA 1200";
    TF_String chipset5 = "Intel Z590";
    std::unique_ptr<TF_Product> product5 = std::make_unique<TF_MotherBoard>(name5, price5, slots5, processor_socket5, chipset5);

    TF_String name6("GeForce RTX 3060 Ti");
    int price6 = 800;
    int memorysize6 = 8;
    int coreclock6 = 1800;
    int memoryclock6 = 14000;
    std::unique_ptr<TF_Product> product6 = std::make_unique<TF_GraphicsCard>(name6, price6, memorysize6, coreclock6, memoryclock6);

    TF_String name7("AMD Radeon RX 6600 XT");
    int price7 = 499;
    int memorysize7 = 8;
    int coreclock7 = 2359;
    int memoryclock7 = 16000;
    std::unique_ptr<TF_Product> product7 = std::make_unique<TF_GraphicsCard>(name7, price7, memorysize7, coreclock7, memoryclock7);

    TF_String name8("NVIDIA GeForce RTX 3070");
    int price8 = 699;
    int memorysize8 = 8;
    int coreclock8 = 1500;
    int memoryclock8 = 14000;
    std::unique_ptr<TF_Product> product8 = std::make_unique<TF_GraphicsCard>(name8, price8, memorysize8, coreclock8, memoryclock8);

    TF_String name9("AMD Radeon RX 6900 XT");
    int price9 = 1499;
    int memorysize9 = 16;
    int coreclock9 = 2015;
    int memoryclock9 = 16000;
    std::unique_ptr<TF_Product> product9 = std::make_unique<TF_GraphicsCard>(name9, price9, memorysize9, coreclock9, memoryclock9);

    TF_String name10("NVIDIA GeForce RTX 3060");
    int price10 = 329;
    int memorysize10 = 12;
    int coreclock10 = 1320;
    int memoryclock10 = 15000;
    std::unique_ptr<TF_Product> product10 = std::make_unique<TF_GraphicsCard>(name10, price10, memorysize10, coreclock10, memoryclock10);

    TechFlow.pushback(product1.get());
    TechFlow.pushback(product2.get());
    TechFlow.pushback(product3.get());
    TechFlow.pushback(product4.get());
    TechFlow.pushback(product5.get());
    TechFlow.pushback(product6.get());
    TechFlow.pushback(product7.get());
    TechFlow.pushback(product8.get());
    TechFlow.pushback(product9.get());
    TechFlow.pushback(product10.get());

    std::cout << "Type 'help' to see commands." << std::endl;
    std::string input;
    bool login = false;

    TF_Customer customer;
    TF_Vector<TF_Product> order_products;
    while (true)
    {
        std::cout << "Enter a command: ";
        std::cin >> input;
        if (input == "exit")
        {
            std::cout << "Exiting..." << std::endl;
            break;
        }

        if (input == "help")
        {
            std::cout << "'exit' : close the program" << std::endl;
            std::cout << "'store' : display all the products" << std::endl;
            std::cout << "'details' : display details of a specific product" << std::endl;
            std::cout << "'login' : login into account as a customer" << std::endl;
            std::cout << "'buy' : buy products from the store" << std::endl;
            std::cout << "'order' : shows your cart" << std::endl;
            std::cout << "'checkout' : proceed to checkout" << std::endl;
        }

        if (input == "store")
        {
            for (int i = 0; i < 10; i++)
                std::cout << i + 1 << ". " << *TechFlow[i] << std::endl;
        }
        if (input == "login")
        {
            if (!login)
            {
                std::cout << "Enter Personal Information:" << std::endl;
                std::cout << std::endl;
                try
                {
                    std::cin >> customer;
                }
                catch (const TF_Exception &ex)
                {
                    std::cerr << ex.what() << std::endl;
                    break;
                }
                std::cout << std::endl;
                std::cout << "Login Complete!";
                login = true;
            }
            else
                std::cout << "Already Logged In!";
        }
        if (input == "details")
        {
            try
            {
                std::cout << "Type Index of Product: ";
                int index;
                std::cin >> index;
                if (index < 1 || index > 15)
                {

                    throw TF_Exception("Invalid index. Index must be between 1 and 15.");
                }

                if (index >= 6 && index <= 10)
                {
                    TF_GraphicsCard *derivedPtr = dynamic_cast<TF_GraphicsCard *>(TechFlow[index - 1]);
                    std::cout << "Choose display : row/column" << std::endl;
                    std::string display;
                    std::cin >> display;
                    std::cout << std::endl;
                    if (display == "row")
                        derivedPtr->displayRow();
                    if (display == "column")
                        derivedPtr->displayColumn();
                }

                if (index >= 1 && index <= 5)
                {
                    TF_MotherBoard *derivedPtr = dynamic_cast<TF_MotherBoard *>(TechFlow[index - 1]);
                    std::cout << "Choose display : row/column" << std::endl;
                    std::string display;
                    std::cin >> display;
                    std::cout << std::endl;
                    if (display == "row")
                        derivedPtr->displayRow();
                    if (display == "column")
                        derivedPtr->displayColumn();
                }

                if (index >= 11 && index <= 15)
                {
                    TF_Processor *derivedPtr = dynamic_cast<TF_Processor *>(TechFlow[index - 1]);
                    std::cout << "Choose display : row/column" << std::endl;
                    std::string display;
                    std::cin >> display;
                    std::cout << std::endl;
                    if (display == "row")
                        derivedPtr->displayRow();
                    if (display == "column")
                        derivedPtr->displayColumn();
                }
            }
            catch (const TF_Exception &ex)
            {
                std::cerr << "Caught TF_Exception: " << ex.what() << std::endl;

                throw std::runtime_error("Caught TF_Exception: " + std::string(ex.what()));
            }
        }

        if (input == "buy")
        {
            if (login)
            {
                for (int i = 0; i < 10; i++)
                    std::cout << i + 1 << ". " << *TechFlow[i] << std::endl;
                std::cout << "How many products you want to buy?" << std::endl;
                int number_of_products, index;
                std::cin >> number_of_products;
                std::cout << std::endl;
                std::cout << "Enter index of products:" << std::endl;

                for (int i = 0; i < number_of_products; i++)
                {
                    std::cin >> index;
                    order_products.pushback(*TechFlow[index - 1]);
                }
            }
            else
                std::cout << "NOT Logged In!";
        }

        if (input == "order")
        {
            if (login)
            {
                TF_Order order(customer, order_products, "");
                std::cout << order;
                std::cout << std::endl;
                std::cout << "Total:" << std::endl;
                std::cout << order.orderTotal() << "$" << std::endl;
                std::cout << std::endl;
                std::cout << "Total after TVA:" << std::endl;
                std::cout << order.addCharge(0.02) << "$" << std::endl;
            }
            else
                std::cout << "NOT Logged In!";
        }

        if (input == "checkout")
        {
            if (login)
            {
                std::cout << "Choose Payment Method : creditcard/cash " << std::endl;
                std::string method;
                std::cin >> method;
                if (method == "creditcard")
                {
                    TF_Order order(customer, order_products, "");
                    std::cout << "Enter Card Number:";
                    TF_String cardnumber;
                    std::cin >> cardnumber;
                    std::cout << std::endl;
                    std::cout << "Enter Card Holder Name:";
                    TF_String cardholdername;
                    std::cin >> cardholdername;
                    std::cout << std::endl;
                    TF_CreditCard creditcard(order, "", false, cardnumber, cardholdername);
                    creditcard.processPayment();
                }

                if (method == "cash")
                {
                    TF_Order order(customer, order_products, "");
                    TF_Cash cash(order, "", false);
                    cash.processPayment();
                }
            }
            else
                std::cout << "NOT Logged In!";
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << std::endl;
    }

    return 0;
}
