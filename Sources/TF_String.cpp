#include "../Headers/TechFlow.hpp"
#include <iostream>
#include <iomanip>
#include <memory>
/// Default Constructor:
TF_String::TF_String() : str(nullptr) {}

/// Constructor with one parameter:
TF_String::TF_String(const char *s)
{
    if (s != nullptr)
    {
        str = std::make_unique<char[]>(str_length(s) + 1);
        str_copy(str.get(), s);
    }
    else
        str = nullptr;
}

/// Copy Constructor:
TF_String::TF_String(const TF_String &other)
{
    if (other.str != nullptr)
    {
        str = std::make_unique<char[]>(str_length(other.str.get()) + 1);
        str_copy(str.get(), other.str.get());
    }
    else
        str = nullptr;
}

/// Move Constructor:
TF_String::TF_String(TF_String &&other) noexcept : str(nullptr)
{
    str = std::move(other.str);
    other.str = nullptr;
}

/// Destructor:
TF_String::~TF_String() {}

/// '=' Operator redefined:
void TF_String::operator=(const TF_String &op2)
{
    if (op2.str != nullptr)
    {
        str = std::make_unique<char[]>(str_length(op2.str.get()) + 1);
        str_copy(str.get(), op2.str.get());
    }
    else
        str = nullptr;
}

/// Move assignment operator
TF_String &TF_String::operator=(TF_String &&other) noexcept
{
    if (this != &other)
    {
        str = std::move(other.str);
        other.str = nullptr;
    }
    return *this;
}

/// '>>' Operator redefined:
std::istream &operator>>(std::istream &in, TF_String &s)
{
    const int buffSz = 1000;
    char buff[buffSz];
    in >> std::setw(buffSz) >> buff;
    if (in.fail())
    {
        throw std::runtime_error("Input string is too large");
    }
    s.str = std::make_unique<char[]>(s.str_length(buff) + 1);
    s.str_copy(s.str.get(), buff);
    return in;
}

/// '<<' Operator redefined:
std::ostream &operator<<(std::ostream &out, const TF_String &s)
{
    out << s.str.get();
    return out;
}

/// str_copy <=> strcpy
void TF_String::str_copy(char *dest, const char *src)
{
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

/// str_length <=> strlen
int TF_String::str_length(const char *s)
{
    int len = 0;
    while (*s != '\0')
    {
        len++;
        s++;
    }
    return len;
}
