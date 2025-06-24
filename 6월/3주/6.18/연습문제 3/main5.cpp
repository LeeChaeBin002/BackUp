//.5 ### 5. Dice 클래스

//주사위 클래스를 만들어 캡슐화를 연습하세요.
//
//- private: 면의 수(sides), 현재 값(value)
//- public: init(int s) - 면의 수 설정, roll() - 주사위 굴리기, getValue() - 현재 값 반환
//	- init 메서드로 면의 수 설정(기본값 6)

#include <iostream>
#include <cstdlib>  // rand()
#include <ctime>    // time()
using namespace std;

class Dice {

private:
	int sides;//면 개수
	int value;//값

public:
    void init(int s = 6) {
        if (s < 2) s = 6; // 최소 2면 이상
        sides = s;
        value = 1;
        srand((unsigned int)time(0));  // 난수 시드 설정 (한 번만 해도 됨)
    }
    void roll() {
        value = rand() % sides + 1;
    }
    int getValue() {
        return value;
    }
};



int main()
{
    Dice d;
    d.init();  // 기본 6면 주사위
    d.roll();
    cout << "6면 주사위를 굴렸습니다:" << d.getValue() << endl;
    Dice d10;
    d10.init(10);  // 10면 주사위
    d10.roll();
    cout << "10면 주사위를 굴렸습니다:" << d10.getValue() << endl;
    Dice d20;
    d20.init(20);  // 12면 주사위
    d20.roll();
    cout << "20면 주사위를 굴렸습니다:" << d20.getValue() << endl;
}