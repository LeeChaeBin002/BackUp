#include <iostream>
#include <cstdlib>
using namespace std;


//.### 8. Stage 클래스

//게임 스테이지 클래스의 생성자와 소멸자를 구현하세요.
//
//- 생성자에서 "스테이지 X 시작!" 출력
//- 소멸자에서 "스테이지 X 클리어!" 출력
//- 스테이지 번호는 생성자 매개변수로 전달

class Gamestage {
private:
	int stageNumber;

public:
	Gamestage(int number) :stageNumber(number)
	{
		cout << "스테이지 " << stageNumber << " 시작!" << endl;

	}
	~Gamestage() {
		cout << "스테이지 " << stageNumber << " 클리어!" << endl;
	}

	void play() {
		cout << "스테이지 " << stageNumber << " 진행 중..." << endl;

	}

};
int main()

{
	cout << "==게임 시작==" << endl;
	{
		Gamestage s1(1);
		s1.play();
	}
	{
		Gamestage s2(2);
		s2.play();
	}
	cout << "==게임 종료==" << endl;

	system("pause");
	return 0;
}