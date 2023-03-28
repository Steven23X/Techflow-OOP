#include "../Headers/TechFlow.hpp"
#include <iostream>
#include <iomanip>
/// Default Constructor:
TF_String::TF_String() : str(nullptr) {}

/// Constructor with one parameter:
TF_String::TF_String(const char *s)
{
    if (s != nullptr)
    {
        str = new char[str_length(s) + 1];
        str_copy(str, s);
    }
    else
        str = nullptr;
}

/// Copy Constructor:
TF_String ::TF_String(TF_String &a)
{
    if (a.str != nullptr)
    {
        str = new char[str_length(a.str + 1)];
        str_copy(str, a.str);
        delete[] a.str;
    }
    else
        str = nullptr;
}

/// Destructor:
TF_String::~TF_String()
{
    delete[] str;
}

/// '=' Operator redefined:
void TF_String::operator=(TF_String &op2)
{
    if (op2.str != nullptr)
    {
        str = new char[str_length(op2.str + 1)];
        str_copy(str, op2.str);
    }
    else
        str = nullptr;
}

/// '>>' Operator redefined:
std::istream &operator>>(std::istream &in, TF_String &s)
{
    const int buffSz = 100;	
	char buff[buffSz];
	in >> std::setw(buffSz) >> buff;
	s.str = new char[s.str_length(buff) + 1];
    s.str_copy(s.str, buff);
	return in;
}

/// '<<' Operator redefined:
std::ostream &operator<<(std::ostream &out, const TF_String &s)
{
    out << s.str;
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
