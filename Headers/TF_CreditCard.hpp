#ifndef _TF_CREDITCARD_HPP_
#define _TF_CREDITCARD_HPP_
#include "TechFlow.hpp"

class TF_CreditCard : protected TF_PaymentMethod
{
    /// Private Variables
    TF_String cardNumber;
    TF_String cardHolderName;

public:
    /// Constructors
    TF_CreditCard();
    TF_CreditCard(TF_Order order, TF_String paymentDetails, bool isPaymentComplete, TF_String cardNumber, TF_String cardHolderName);
    /// Public Methods
    void processPayment() override;
    TF_String getPaymentMethodName();

    /// Destructor
    ~TF_CreditCard(){}
};
#endif