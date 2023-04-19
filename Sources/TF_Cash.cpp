#include "../Headers/TechFlow.hpp"
#include <iostream>

TF_Cash::TF_Cash() : TF_PaymentMethod() {}

TF_Cash::TF_Cash(TF_Order order, TF_String paymentDetails, bool isPaymentComplete)
    : TF_PaymentMethod(order, paymentDetails, isPaymentComplete) {}

void TF_Cash::processPayment()
{
    std::cout << "Processing cash payment... " << std::endl;
    double card = order.verifyBudget(order.addCharge(0.02));
    if (card < 0)
        std::cout << "Not enough cash.";
    else
    {
        std::cout << "Cash ACCEPTED! Order Sent..";
        isPaymentComplete = true;
    }
    displayPaymentInfo();
}

TF_String TF_Cash::getPaymentMethodName()
{
    return "Cash";
}