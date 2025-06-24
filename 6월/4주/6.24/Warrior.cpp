#include "Warrior.h"


Warrior::Warrior(std::string name, int hp, int strength)
	: Character(name, hp), strength(strength) 
{
	cout << "전사 생성:" << name << "(HP:" << hp << ",힘: " << strength << ")" << endl;
}
	
void Warrior::Attack(){
	cout << name << "이(가) 검으로 공격합니다! " << endl;
}