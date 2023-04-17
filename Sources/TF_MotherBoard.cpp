#include "../Headers/TechFlow.hpp"
#include <iostream>

/// Constructors
TF_MotherBoard::TF_MotherBoard()
    : TF_Product(), slots(0), processor_socket(""), chipset("")
{
    setType("MotherBoard");
}

TF_MotherBoard::TF_MotherBoard(TF_String &name, double price, int slots, TF_String processor_socket, TF_String chipset)
    : TF_Product(name, price), slots(slots), processor_socket(processor_socket), chipset(chipset)
{
    setType("MotherBoard");
}

TF_MotherBoard::TF_MotherBoard(const TF_MotherBoard &other)
    : TF_Product(other)
{
    slots = other.slots;
    processor_socket = other.processor_socket;
    chipset = other.chipset;
}

/// Destructor

TF_MotherBoard::~TF_MotherBoard() {}