#ifndef _TF_CUSTOMER_HPP
#define _TF_CUSTOMER_HPP

#include "TechFlow.hpp"

class TF_Customer
{
    /// Private Variables  
    TF_String first_name;
    TF_String last_name;
    TF_String address;
    TF_String email;
    double budget;

public:
    /// Constructors:
    TF_Customer();
    TF_Customer(TF_String &first_name, TF_String &last_name, TF_String &address, TF_String &email, double budget);
    TF_Customer(TF_Customer &other);

    ///Destructor:
    ~TF_Customer();

    /// Operators:
    friend std::istream &operator>>(std::istream &in, TF_Customer &object);
    friend std::ostream &operator<<(std::ostream &out, const TF_Customer &object);

    /// Methods:
    double getBudget();
};
#endif