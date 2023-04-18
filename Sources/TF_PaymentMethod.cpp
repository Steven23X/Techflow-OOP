#include <iostream>
#include "../Headers/TechFlow.hpp"

void TF_PaymentMethod::displayPaymentInfo()
{
    std::cout << "Payment method: " << getPaymentMethodName() << std::endl;
    std::cout << "Payment details: " << paymentDetails << std::endl;
    std::cout << "Payment status: " << (isPaymentComplete ? "Complete" : "Incomplete") << std::endl;
}

TF_PaymentMethod::~TF_PaymentMethod() {}