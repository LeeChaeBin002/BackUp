#pragma once  
#include <iostream>  
#include <string>  
#include "Equipment.h"
using namespace std;  

class Armor  : public Equipment
{  
protected:
    int defense;

public:
    Armor(const std::string& name, int price, int durability, int defense);
    void PrintInfo() const override;  

};
