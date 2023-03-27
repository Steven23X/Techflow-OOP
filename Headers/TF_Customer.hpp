#ifndef _TF_CUSTOMER_HPP
#define _TF_CUSTOMER_HPP

#include "TechFlow.hpp"

class TF_Customer
{
    TF_String first_name;
    TF_String last_name;
    TF_String address;
    TF_String email;
    int budget;

public:
    TF_Customer();
    TF_Customer(TF_String &first_name, TF_String &last_name, TF_String &address, TF_String &email, int budget);
    TF_Customer(TF_Customer &other);
    ~TF_Customer();

    friend std::istream &operator>>(std::istream &in, TF_Customer &object);
    friend std::ostream &operator<<(std::ostream &out, const TF_Customer &object);
};
#endif