#ifndef _TF_PAYMENTMETHOD_HPP_
#define _TF_PAYMENTMETHOD_HPP_
#include "../TechFlow.hpp"

/// Abstract Class
class TF_PaymentMethod
{
protected:

    /// Protected Variables:
    TF_Order order;
    TF_String paymentDetails;
    bool isPaymentComplete;

    /// Protected Method:
    virtual TF_String getPaymentMethodName() = 0;

public:
    /// Constructors:
    TF_PaymentMethod();
    TF_PaymentMethod(const TF_Order& order,TF_String paymentDetails,bool isPaymentComplete);
    /// Public Methods:
    virtual void processPayment() = 0;
    void displayPaymentInfo();

    /// Destructor
    virtual ~TF_PaymentMethod();
};
#endif