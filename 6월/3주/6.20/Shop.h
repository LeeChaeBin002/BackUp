#ifndef SHOP_H  
#define SHOP_H  
#pragma once

class Shop//클래스 내부는 메소드 선언만
{
private:
	int gold;
public:
	Shop(int initialGold = 100);

	void buyitem(int cost);
	void sellItem(int price);
	void showGold() const;


};

#endif 