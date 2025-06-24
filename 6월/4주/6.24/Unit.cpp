#include "Unit.h"
#include <iostream>  
using namespace std;


Unit::Unit(int x, int y) : x(x), y(y) {}

void Unit::Move(int dx, int dy) {
    x += dx;
    y += dy;
    cout << "유닛이 이동했습니다.\n";
}
void Unit::PrintPosition() const {
    cout << "현재 위치: (" << x << ", " << y << ")\n";
}