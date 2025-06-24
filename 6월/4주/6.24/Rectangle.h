#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
private:
    int width, height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    void Draw() const override {
        std::cout << "사각형을 그립니다. (가로: " << width << ", 세로: " << height << ")\n";
    }
};

