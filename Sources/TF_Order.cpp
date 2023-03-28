#include "../Headers/TechFlow.hpp"
#include <iostream>

// Default constructor
TF_Order::TF_Order() {}

// Constructor with 3 parameters.
TF_Order::TF_Order(TF_Customer customer, TF_Vector<TF_Product> products, TF_String date)
{
    this->customer = customer;
    this->products = products;
    this->date = date;
}

// Copy constructor
TF_Order::TF_Order(TF_Order &other)
{
    this->customer = other.customer;
    this->products = other.products;
    this->date = other.date;
}

// Destructor
TF_Order::~TF_Order() {}

/// '<<' Operator redefined:
std::ostream &operator<<(std::ostream &out, const TF_Order &object)
{
    out << "Order details:" << std::endl;
    out << "Customer: " << std::endl
        << object.customer << std::endl;
    out << "Products: " << std::endl
        << object.products << std::endl;
    out << "Date: " << std::endl
        << object.date << std::endl;
    return out;
}