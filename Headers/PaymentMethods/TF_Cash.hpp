#ifndef _TF_CASH_HPP_
#define _TF_CASH_HPP_
#include "../TechFlow.hpp"

class TF_Cash : protected TF_PaymentMethod
{
public:
    /// Constructors
    TF_Cash();
    TF_Cash(TF_Order order, TF_String paymentDetails, bool isPaymentComplete);
    /// Public Methods
    void processPayment() override;
    TF_String getPaymentMethodName();

    /// Destructor
    ~TF_Cash() {}
};
#endif