//## 문제 8. 몬스터 체력 업데이트
//
//범위 기반 for문과 레퍼런스를 사용하여 모든 몬스터의 체력을 증가시키세요.
//
//- 5마리 몬스터의 체력을 배열에 저장합니다
//- 난이도 상승으로 모든 몬스터의 체력을 20 % 증가시킵니다
//- 범위 기반 for문에서 레퍼런스를 사용합니다
#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int hp[5] = { 100, 150, 200	, 120, 180 };

	cout << "=== 난이도 상승 전===" << endl;
	cout << "몬스터 체력: ";

	for (int h : hp)
	{
		cout << h << " ";
	}
	cout << endl;

	for (int& h : hp)
	{
		h = h * 1.2;
	}
	cout << "=== 난이도 상승 후(20% 증가) ===" << endl;
	cout << "몬스터 체력: ";

	for (int h : hp)
	{
		cout << h << " ";

	}
		cout << endl;
		return 0;
}






