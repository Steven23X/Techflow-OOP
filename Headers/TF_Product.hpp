#ifndef _TF_PRODUCT_HPP
#define _TF_PRODUCT_HPP

#include "TechFlow.hpp"
#include <iostream>

class TF_Product
{   
    /// Private Variables:
    TF_String name;
    TF_String type;
    float price;

public:

    /// Constructors:
    TF_Product();
    TF_Product(TF_String &name, TF_String &type, float price);
    TF_Product(TF_Product &object);

    /// Destructor:
    ~TF_Product();

    /// Operators:
    friend std::istream &operator>>(std::istream &in, TF_Product &object);
    friend std::ostream &operator<<(std::ostream &out, const TF_Product &object);

    /// Methods:
    void discount(int percentage);
    void discount(double percentage);

};
#endif