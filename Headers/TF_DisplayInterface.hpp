#ifndef _TF_DISPLAYINTERFACE_HPP_
#define _TF_DISPLAYINTERFACE_HPP_
#include "TechFlow.hpp"

class TF_DisplayInterface
{
public:
    // Virtual destructor
    virtual ~TF_DisplayInterface() {}

    // Pure virtual methods
    virtual void displayRow() = 0;
    virtual void displayColumn() = 0;
};
#endif