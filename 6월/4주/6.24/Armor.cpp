#include "Armor.h"  
#include <iostream>  

using namespace std;  

Armor::Armor(const std::string& name, int price, int durability, int defense)  
	: Equipment(name, price, durability), defense(defense) {}  

void Armor::PrintInfo() const {
    cout << name << " 정보:\n";
    Equipment::PrintInfo();
    cout << "방어력: " << defense << "\n";
}
