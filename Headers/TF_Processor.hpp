#ifndef _TF_PROCESSOR_HPP_
#define _TF_PROCESSOR_HPP_
#include "TechFlow.hpp"

class TF_Processor : public TF_Product, public TF_DisplayInterface
{
    /// Private Variables:
    int coreCount;
    int coreClock;
    TF_String socket;

public:
    /// Constructors:
    TF_Processor();
    TF_Processor(TF_String &name, double price, int coreCount, int coreClock, TF_String socket);
    TF_Processor(const TF_Processor &other);

    /// Destructor:
    ~TF_Processor();

    /// Methods:
    void displayRow() override;
    void displayColumn() override;
};
#endif