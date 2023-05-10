#include "../Headers/TechFlow.hpp"
#include <iostream>

/// Default Constructor:
TF_Product::TF_Product() : name(""), type(""), price(0) {}

/// Constructor with three and two parameters:
TF_Product::TF_Product(TF_String &name, TF_String &type, double price)
{
    this->name = name;
    this->type = type;
    this->price = price;
}

TF_Product::TF_Product(TF_String &name, double price)
{
    this->name = name;
    this->price = price;
}

/// Copy Constructor:
TF_Product::TF_Product(const TF_Product &other)
{
    name = other.name;
    type = other.type;
    price = other.price;
}

/// Default Destructor (trivial)
TF_Product::~TF_Product() {}

/// '>>' Operator redefined:
std::istream &operator>>(std::istream &in, TF_Product &object)
{
    std::cout << "Enter type of product: ";
    in >> object.type;
    std::cout << "Enter name of product: ";
    in >> object.name;
    std::cout << "Enter price of product: ";
    in >> object.price;
    return in;
}

/// '<<' Operator redefined:
std::ostream &operator<<(std::ostream &out, const TF_Product &object)
{
    out << "Name: " << object.name << " / ";
    out << "Type: " << object.type << " / ";
    out << "Price: " << object.price << "$ / " << std::endl;
    return out;
}

/// price after a discount of type int (20%)
void TF_Product::discount(int percentage)
{
    price = price - (price * percentage) / 100;
}

/// price after a discount of type double (0.2)
void TF_Product::discount(double percentage)
{
    price = price - price * percentage;
}

/// getter for price
double TF_Product::getPrice() const
{
    return price;
}

/// setter for type
void TF_Product::setType(const TF_String &type)
{
    this->type = type;
}
