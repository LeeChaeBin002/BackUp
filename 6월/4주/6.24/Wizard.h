#pragma once
#include <iostream>  
#include "Character.h"
using namespace std;
class Wizard : public Character
{
private:
	int mana;  //Èû

public:

	Wizard(std::string name, int hp, int strength);
		void Attack() override;
};



