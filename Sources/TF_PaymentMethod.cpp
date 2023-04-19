#include <iostream>
#include "../Headers/TechFlow.hpp"

TF_PaymentMethod::TF_PaymentMethod() : order(), paymentDetails(), isPaymentComplete(false) {}

TF_PaymentMethod::TF_PaymentMethod(TF_Order order, TF_String paymentDetails, bool isPaymentComplete)
{
    this->order = order;
    this->paymentDetails = paymentDetails;
    this->isPaymentComplete = isPaymentComplete;
}
void TF_PaymentMethod::displayPaymentInfo()
{
    std::cout << std::endl;
    std::cout << "Payment method: " << getPaymentMethodName() << std::endl;
    std::cout << "Payment details: " << paymentDetails << std::endl;
    std::cout << "Payment status: " << (isPaymentComplete ? "Complete" : "Incomplete") << std::endl;
}

TF_PaymentMethod::~TF_PaymentMethod() {}