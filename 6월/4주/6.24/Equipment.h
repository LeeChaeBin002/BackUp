#pragma once  
#include "Item.h" // Item 클래스 정의를 포함하여 오류를 방지합니다.


class Equipment : public Item
{
protected:
	int durability; // 내구성  

public:
	Equipment(const std::string& name, int price, int durability);	
	void PrintInfo() const override; // Corrected method name to match the base class  
};

