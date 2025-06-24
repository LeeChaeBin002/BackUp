#pragma once  
#include "Skill.h"  
#include <iostream>  

using namespace std;  
class FireBall : public Skill  
{  
private:  
public:  
	void Use() override   
	{  
		cout << "파이어볼 사용! 50 데미지를 입혔습니다." << endl;  
	}  
	int GetManaCost() override { return 30; }  
	int GetCooldown() override { return 5; }  
	string GetName() override { return "파이어볼"; }  

};
