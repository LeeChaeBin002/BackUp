#include <iostream>
#include <cstdlib>
using namespace std;
//### 12. PlayerRef 클래스

//참조 멤버를 가진 플레이어 클래스를 만드세요.
//
//- int& scoreRef(점수 참조)
//- string name
//- 멤버 초기화 리스트로 참조 초기화
class Player {
private:
	string name;
	int& scoreRef;//점수 참조

public:
	Player(string _name,int& _score)
		:name(_name),scoreRef(_score){ }
	void printStatus()const {
		cout << "플레이어:" << name << ", 점수:" << scoreRef << endl;
	}
	void addscore(int amount) {
		scoreRef += amount;
	}
};
int main()

{
	int score = 0;
	Player p("홍길동", score);

	p.printStatus();               // 점수: 0
	cout << "점수 100점 추가" << endl;
	p.addscore(100);              // 점수 += 100
	p.printStatus();              // 점수: 100

	cout << "원본 점수도 변경됨: " << score << endl; // → 100
}
