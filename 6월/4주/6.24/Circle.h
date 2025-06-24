#pragma once
#include "Shape.h"
class Circle :
    public Shape
{
private:
    int radius;

public:
    Circle(int r) : radius(r) {}

    void Draw() const override {
        std::cout << "원을 그립니다. (반지름: " << radius << ")\n";
    }
};

