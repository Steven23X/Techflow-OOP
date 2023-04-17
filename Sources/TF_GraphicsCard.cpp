#include "../Headers/TechFlow.hpp"
#include <iostream>
#include <string>

/// Constructors
TF_GraphicsCard::TF_GraphicsCard() : TF_Product(), memorySize(0), coreClock(0), memoryClock(0)
{
    setType("GraphicsCard");
}

TF_GraphicsCard::TF_GraphicsCard(TF_String &name, double price, int memorySize, int coreClock, int boostClock) : TF_Product(name, price), memorySize(memorySize), coreClock(coreClock), memoryClock(memoryClock)
{
    setType("GraphicsCard");
}

TF_GraphicsCard::TF_GraphicsCard(const TF_GraphicsCard &other) : TF_Product(other)
{
    memorySize = other.memorySize;
    coreClock = other.coreClock;
    memoryClock = other.memoryClock;
}

/// Destructor
TF_GraphicsCard::~TF_GraphicsCard() {}
