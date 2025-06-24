#pragma once  
#include <string>  

using namespace std;  
class Skill  
{  
public:  
	virtual void Use() = 0;  
	virtual int GetManaCost() = 0;  
	virtual int GetCooldown() = 0; // 반환 형식을 int로 수정하여 공변성 문제 해결  
	virtual string GetName() = 0;  
};
