#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
//### 10. Item 클래스

//아이템 클래스에 기본값이 있는 생성자를 만드세요.
//
//- Item(string name = "아이템", int price = 100)
//- 다양한 방법으로 객체 생성
class Item{
private:
	string name;
	int price;
public:
	//기본값 생성자
	Item(string _name="아이템",int _price=100) 
	:name(_name),price(_price) {}//멤버 이니셜라이저

	string status() {
		return name + "(가격: " + to_string(price) + "골드)";
	}
};



int main()
{
	Item item1;                      // 기본값 사용
	Item item2("포션");              // 이름만 지정, 가격은 기본값
	Item item3("검", 500);           // 이름과 가격 모두 지정

	cout << "아이템1: " << item1.status() << endl;
	cout << "아이템2: " << item2.status() << endl;
	cout << "아이템3: " << item3.status() << endl;

}
