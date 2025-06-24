//## 문제 7. 인벤토리 아이템 가격 계산
//
//범위 기반 for문을 사용하여 인벤토리의 총 가격을 계산하세요.
//
//- 5개 아이템의 가격을 배열에 저장합니다
//- 범위 기반 for문으로 순회하며 합계를 구합니다
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int prices[5] = { 1500, 3200, 800, 5000, 2300 };
	int total = 0;
	int maxPrice = 0;
	cout << "아이템 가격 목록:";

	for (int price : prices) 
	{
		cout << price << " ";
		total += price;
		if (price > maxPrice)
			maxPrice = price;
	}

	cout << endl<<"인벤토리 총 가격:" << total << "골드" << endl;
	cout << "가장 비싼 아이템:" << maxPrice << "골드" << endl;

	return 0;
}
