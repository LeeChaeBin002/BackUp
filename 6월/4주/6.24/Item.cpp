
#include "Item.h"
#include <iostream>
using namespace std;

Item::Item(const std::string& name,int price)
	:name(name),price(price){ }

void Item::PrintInfo() const
{
	cout << "[Item]" << endl;
	cout << "이름: " << name << endl;
	cout << "가격: " << price << "골드\n";

}