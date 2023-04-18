#ifndef _TF_PRODUCT_HPP
#define _TF_PRODUCT_HPP

#include "TechFlow.hpp"
#include <iostream>

class TF_Product
{
    /// Private Variables:
    TF_String name;
    TF_String type;
    double price;

public:
    /// Constructors:
    TF_Product();
    TF_Product(TF_String &name, TF_String &type, double price);
    TF_Product(TF_String &name, double price);
    TF_Product(const TF_Product &other);

    /// Destructor:
    ~TF_Product();

    /// Operators:
    friend std::istream &operator>>(std::istream &in, TF_Product &object);
    friend std::ostream &operator<<(std::ostream &out, const TF_Product &object);

    /// Methods:
    void discount(int percentage);
    void discount(double percentage);
    double getPrice();
    void setType(const TF_String &type);

    virtual void dummy() {}
};
#endif