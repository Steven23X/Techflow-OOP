#include "../Headers/TechFlow.hpp"
#include <iostream>

TF_Cash::TF_Cash() : TF_PaymentMethod() {}

TF_Cash::TF_Cash(TF_Order order, TF_String paymentDetails, bool isPaymentComplete)
    : TF_PaymentMethod(order, paymentDetails, isPaymentComplete) {}

void TF_Cash::processPayment()
{
    std::cout << "Processing cash payment... " << std::endl;

    auto overBudgetCallback = []()
    {
        std::cout << "Not enough cash.";
    };

    auto remainingBudgetCallback = [](double remainingBudget)
    {
        std::cout << "Remaining Budget: " << remainingBudget << "$" << std::endl;
        std::cout << "Cash ACCEPTED! Order Sent..";
    };
    double cash = order.verifyBudget(order.addCharge(0.02), overBudgetCallback, remainingBudgetCallback);
    if (cash >= 0)
        isPaymentComplete = true;
    displayPaymentInfo();
}

TF_String TF_Cash::getPaymentMethodName()
{
    return "Cash";
}