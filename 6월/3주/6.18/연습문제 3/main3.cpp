#include <iostream>
#include <string>
using namespace std;
//3.### Monster 클래스

//Monster 클래스를 만들어 private 멤버(hp, attack)와 public 메서드를 구현하세요.
//
//- init() 메서드로 hp = 100, attack = 10으로 초기화
//- showInfo() 메서드로 정보 출력
//- takeDamage(int damage) 메서드로 hp 감소


	class Monster
	{
	private:
		int hp;
		int attack;

	public:
		void init() {
			hp = 100;
			attack = 10;
		}

		void showInfo()
		{
			cout << "몬스터 정보" << "HP: " << hp << ", 공격력: " << attack << endl;

		}

		void takeDamage(int damage) {
			hp -= damage;
			if (hp < 0) hp = 0;
			cout << damage << "의 피해를 입었습니다! " << endl;
		}
	};
	int main()
	{
		Monster m;
		m.init();
		m.showInfo();

		m.takeDamage(20);
		m.showInfo();


}
