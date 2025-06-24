#include "Vehicle.h"
#include <iostream>  
using namespace std;

Vehicle::Vehicle(int x, int y) 
    : Unit(x, y) {}

void Vehicle::Move(int dx, int dy) {
    x += dx;
    y += dy;
    cout << "차량이 달려서 이동합니다.\n";
    PrintPosition();
}