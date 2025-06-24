#pragma once  
#include <string>  

class Character  
{  
protected:  //상속 받은 자식 클래스도 접근 가능
	std::string name;  
	int hp;  

public:  
	Character(std::string name, int hp); 
	virtual void Attack() = 0;
	virtual ~Character() = default;  //소멸자
};


