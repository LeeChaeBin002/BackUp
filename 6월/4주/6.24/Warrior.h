#pragma once  
#include "Character.h"  
#include <iostream>  
#include <string>
using namespace std;  

class Warrior : public Character
{
private:
	int strength;  //Èû

public:

	Warrior(std::string name, int hp, int strength);
	void Attack() override;
};

