#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


//### 9. Character 클래스 (생성자 오버로딩)

//RPG 캐릭터 클래스에 다양한 생성자를 만드세요.
//
//- 기본 생성자 : 이름 = "모험가", HP = 100, MP = 50
//- 이름만 받는 생성자 : HP = 100, MP = 50
//- 모든 값을 받는 생성자
class Character {
private:
	string name;
	int hp;
	int mp;

public:
	Character():name("모험가"),hp(100),mp(50){}//기본 생성자
	Character(string _name) : name(_name), hp(100), mp(50) {}//2.
	Character(string _name, int _hp, int _mp) : name(_name), hp(_hp), mp(_mp) {}

	string Status() {
		return name + "(HP:" + to_string(hp) + ",MP:" + to_string(mp) + ")";

	}
};
int main() 
{
	Character c1;                         // 기본 생성자
	Character c2("전사");                 // 이름만 받는 생성자
	Character c3("마법사", 80, 150);      // 모든 값 받는 생성자

	cout << "캐릭터1: " << c1.Status() << endl;
	cout << "캐릭터2: " << c2.Status() << endl;
	cout << "캐릭터3: " << c3.Status() << endl;

	
}

