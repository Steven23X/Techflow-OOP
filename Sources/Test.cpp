#include <iostream>
#include "../Headers/TechFlow.hpp"
int main()
{
    /// TF_Customer class testing:

    /*TF_Customer a;
    std::cin>>a;
    TF_Customer b(a);
    std::cout<<b;
    */
    /// TF_Product class testing:

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
}