#ifndef _TF_EXCEPTION_
#define _TF_EXCEPTION_

#include <iostream>
#include "../TechFlow.hpp"

class TF_Exception : public std::exception
{
    std::string errorMessage;

public:
    explicit TF_Exception(const char *error_message);
    const char *what() const noexcept override;
};
#endif
