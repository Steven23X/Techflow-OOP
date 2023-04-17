#include "../Headers/TechFlow.hpp"
#include <iostream>

/// Constructors
TF_Processor::TF_Processor() : TF_Product(), coreCount(0), coreClock(0), socket("")
{
    setType("Processor");
}

TF_Processor::TF_Processor(TF_String &name, double price, int coreCount, int coreClock, TF_String socket)
    : TF_Product(name, price), coreCount(coreCount), coreClock(coreClock), socket(socket)
{
    setType("Processor");
}

TF_Processor::TF_Processor(const TF_Processor &other)
    : TF_Product(other)
{
    coreCount = other.coreCount;
    coreClock = other.coreClock;
    socket = other.socket;
}

/// Destructor

TF_Processor::~TF_Processor() {}
