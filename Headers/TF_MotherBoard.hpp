#ifndef _TF_MOTHERBOARD_HPP_
#define _TF_MOTHERBOARD_HPP_
#include "TechFlow.hpp"

class TF_MotherBoard : public TF_Product, public TF_DisplayInterface
{
    /// Private Variables
    int slots;
    TF_String processor_socket;
    TF_String chipset;

public:
    /// Constructors:
    TF_MotherBoard();
    TF_MotherBoard(TF_String &name, double price, int slots, TF_String processor_socket, TF_String chipset);
    TF_MotherBoard(const TF_MotherBoard &other);

    /// Destructor:
    ~TF_MotherBoard();

    /// Methods:
    void displayRow() override;
    void displayColumn() override;
};
#endif