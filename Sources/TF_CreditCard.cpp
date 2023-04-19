#include "../Headers/TechFlow.hpp"
#include <iostream>

TF_CreditCard::TF_CreditCard() : TF_PaymentMethod(), cardNumber(), cardHolderName() {}

TF_CreditCard::TF_CreditCard(TF_Order order, TF_String paymentDetails, bool isPaymentComplete, TF_String cardNumber, TF_String cardHolderName)
    : TF_PaymentMethod(order, paymentDetails, isPaymentComplete), cardNumber(cardNumber), cardHolderName(cardHolderName) {}

void TF_CreditCard::processPayment()
{
    std::cout << "Processing credit card payment... " << std::endl;
    double card = order.verifyBudget(order.addCharge(0.02));
    if (card < 0)
        std::cout << "Card DECLINED! Not enough funds.";
    else
    {
        std::cout << "Card ACCEPTED! Order Sent..";
        isPaymentComplete = true;
    }
    displayPaymentInfo();
}

TF_String TF_CreditCard::getPaymentMethodName()
{
    return "Credit Card";
}