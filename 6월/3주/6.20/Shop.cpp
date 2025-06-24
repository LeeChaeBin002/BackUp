#include "Shop.h"  
#include <iostream>  
using namespace std;  

Shop::Shop(int initialGold):gold(initialGold) {}  

void Shop::buyitem(int cost)  
{  
    if (gold >= cost) {  
        gold -= cost;  
        cout << "아이템 구매 (-" << cost << "골드)" << endl;  
    }  
    else {  
        cout << "골드 부족! 구매 실패" << endl;  
    }  
}  

void Shop::sellItem(int price)  
{  
    gold += price;  
    cout << "아이템 판매 (+" << price << "골드)" << endl;  
}  

void Shop::showGold() const  
{  
    cout << "현재 골드: " << gold << endl ;
}
