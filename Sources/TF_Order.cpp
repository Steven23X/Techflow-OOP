#include "../Headers/TechFlow.hpp"
#include <iostream>
#include <functional>

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

/// Method that returns the total price of all products:
double TF_Order::orderTotal()
{
    double total = 0;
    for (int i = 0; i < products.getSize(); i++)
    {
        total += products[i].getPrice();
    }
    return total;
}

/// Method that returns the total price after charge:
double TF_Order::addCharge(double charge)
{
    double total = orderTotal() + orderTotal() * charge;
    return total;
}

/// Method that returns the remaining budget:
double TF_Order::verifyBudget(double value, const std::function<void()> &overBudgetCallback, const std::function<void(double)> &remainingBudgetCallback)
{
    double remainingBudget = customer.getBudget() - value;
    if (remainingBudget < 0)
    {
        overBudgetCallback();
    }
    else
    {
        remainingBudgetCallback(remainingBudget);
    }
    return remainingBudget;
}
