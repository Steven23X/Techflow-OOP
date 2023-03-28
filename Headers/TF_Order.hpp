#ifndef _TF_ORDER_HPP

#include "TechFlow.hpp"
#include <iostream>

class TF_Order
{
    TF_Customer customer;
    TF_Vector<TF_Product> products;
    TF_String date;

public:
    TF_Order();
    TF_Order(TF_Customer customer, TF_Vector<TF_Product> products, TF_String date);
    TF_Order(TF_Order &other);
    ~TF_Order();

    friend std::ostream &operator<<(std::ostream &out, const TF_Order &object);

    int orderTotal();
    double addCharge(double charge);
};

#endif