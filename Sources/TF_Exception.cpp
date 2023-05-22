#include "../Headers/TechFlow.hpp"

TF_Exception::TF_Exception(const char *errorMessage) : errorMessage(errorMessage) {}

const char *TF_Exception::what() const noexcept
{
    return errorMessage.c_str();
}