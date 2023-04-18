#include "../Headers/TechFlow.hpp"
#include <iostream>
#include <string>

/// Constructors
TF_GraphicsCard::TF_GraphicsCard()
    : TF_Product(), memorySize(0), coreClock(0), memoryClock(0)
{
    setType("GraphicsCard");
}

TF_GraphicsCard::TF_GraphicsCard(TF_String &name, double price, int memorySize, int coreClock, int memoryClock)
    : TF_Product(name, price), memorySize(memorySize), coreClock(coreClock), memoryClock(memoryClock)
{
    setType("GraphicsCard");
}

TF_GraphicsCard::TF_GraphicsCard(const TF_GraphicsCard &other)
    : TF_Product(other)
{
    memorySize = other.memorySize;
    coreClock = other.coreClock;
    memoryClock = other.memoryClock;
}

/// Destructor
TF_GraphicsCard::~TF_GraphicsCard() {}

/// Methods

/// display method in row
void TF_GraphicsCard::displayRow()
{
    std::cout << "Memory Size: " << memorySize << "GB"
              << " * Core Clock: " << coreClock << "MHz"
              << " * Memory Clock: " << memoryClock << "MHz" << std::endl;
}

/// display method in column
void TF_GraphicsCard::displayColumn()
{
    std::cout << "Memory Size: " << memorySize << "GB" << std::endl;
    std::cout << "Core Clock: " << coreClock << "MHz" << std::endl;
    std::cout << "Memory Clock: " << memoryClock << "MHz" << std::endl;
    std::cout << std::endl;
}