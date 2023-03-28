#include <iostream>
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
}