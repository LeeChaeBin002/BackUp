
#include <iostream>
#include <string>
using namespace std;

void swapStats(int& atk, int& def, int& atk2, int& def2)
{
	int swap = atk;
	atk = atk2;
	atk2 = swap;
	int swap2 = def;
	def = def2;
	def2 = swap2;
}

int main() {
//4.## 문제 4. 다양한 초기화 방법 연습

	/*게임 아이템의 정보를 다양한 C++ 초기화 방법으로 설정하고 출력하세요.

	- 복사 초기화, 직접 초기화, 유니폼 초기화를 각각 사용합니다
	 아이템 이름(string), 가격(int), 공격력(int)을 저장합니다*/
	/*string item = "철검";
	string Item("마법검");
	string ITEM{ "전설검" };

	int price = 1000;//복사
	int Price(3000);//직접
	int PRICE{10000};//유니폼

	int attak=25;
	int Attak(25);
	int ATTAK{ 100 };

	cout << "아이템 1(복사 초기화)" << endl;
	cout << "이름: " << item << endl;
	cout << "가격: " << price << endl;
	cout << "공격력: " << attak << endl << endl;

	cout << "아이템 2(직접 초기화)" << endl;
	cout << "이름: " << Item << endl;
	cout << "가격: " << Price << endl;
	cout << "공격력: " << attak << endl << endl;

	cout << "아이템 2(유니폼 초기화)" << endl;
	cout << "이름: " << ITEM << endl;
	cout << "가격: " << PRICE << endl;
	cout << "공격력: " << ATTAK << endl << endl;

//.5## 문제 5. 스탯 교환 시스템

	/*두 캐릭터의 공격력과 방어력을 교환하는 함수를 레퍼런스를 사용하여 구현하세요.

	- swapStats 함수를 만들어 두 캐릭터의 공격력과 방어력을 교환합니다
	- 레퍼런스 매개변수를 사용합니다*/

	int attack1,defense1;
	int attack2, defense2;
	//입력값
	
	cin >> attack1;
	cin >> defense1;
	cin >> attack2;
	cin >> defense2;

	// 출력: 교환 전
	cout << "\n=== 교환 전 ===" << endl;
	cout << "캐릭터1 - 공격력: " << attack1 << ", 방어력: " << defense1 << endl;
	cout << "캐릭터2 - 공격력: " << attack2 << ", 방어력: " << defense2 << endl;

	//스탯교환
	swapStats(attack1, defense1, attack2, defense2);
	cout << "=== 교환 후 ===" << endl;
	cout << "캐릭터1" << " - " << "공격력: "<< attack1<< ", 방어력: "<< defense1<< endl;
	cout << "캐릭터2" << " - " << "공격력: " << attack2 << ", 방어력: " << defense2 << endl;


}
