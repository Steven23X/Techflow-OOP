#ifndef _TF_GRAPHICSCARD_HPP_
#define _TF_GRAPHICSCARD_HPP_
#include "TechFlow.hpp"

class TF_GraphicsCard : public TF_Product
{
    /// Private Variables:
    int memorySize;
    int coreClock;
    int memoryClock;

public:
    /// Constructors:
    TF_GraphicsCard();
    TF_GraphicsCard(TF_String &name, double price, int memorySize, int coreClock, int memoryClock);
    TF_GraphicsCard(const TF_GraphicsCard &other);

    /// Destructor:
    ~TF_GraphicsCard();

    /// Methods:
};
#endif