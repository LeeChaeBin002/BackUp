#pragma once
#include "Unit.h"
class Vehicle : public Unit
{
private:

public:
    Vehicle(int x = 0, int y = 0);
    void Move(int dx, int dy) override;
};

