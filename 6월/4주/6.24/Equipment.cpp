#include "Equipment.h"
#include <iostream>

Equipment::Equipment(const std::string& name, int price, int durability)
	: Item(name, price), durability(durability) {}

void Equipment::PrintInfo() const {
	std::cout << "Name: " << name << ", Price: " << price << ", Durability: " << durability << std::endl;
}
