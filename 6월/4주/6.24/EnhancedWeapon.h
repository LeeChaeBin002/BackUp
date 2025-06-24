#pragma once
#include "Weapon.h"
class EnhancedWeapon : public Weapon
{
public:
	EnhancedWeapon() {
		std::cout << "EnhancedWeapon 생성자" << std::endl;
	}
	~EnhancedWeapon() { // 소멸자는 virtual로 선언 
		std::cout << "EnhancedWeapon 소멸자" << std::endl;
	}
};

