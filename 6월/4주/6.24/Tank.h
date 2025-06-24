#pragma once
#include "Vehicle.h"

class Tank : public Vehicle
{
public:
    Tank(int x = 0, int y = 0);
    void Move(int dx, int dy) override;
};