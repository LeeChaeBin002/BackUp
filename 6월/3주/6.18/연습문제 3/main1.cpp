#include <iostream>
#include <string>
using namespace std;
//1.### 1. 게임 회사 네임스페이스

//두 게임 회사(Nexon, NCsoft)에서 각각 Player 클래스를 만들었습니다.네임스페이스를 사용하여 구분하고, 각 회사의 Player를 생성하여 정보를 출력하세요.
//
//- Nexon::Player의 showInfo() 메서드는 "넥슨 플레이어입니다"라고 출력
//- NCsoft::Player의 showInfo() 메서드는 "엔씨소프트 플레이어입니다"라고 출력

namespace Nexon
{
	class player 
	{
	public:
		void showInfo() {
			cout << "넥슨 플레이어입니다." << endl;
		}
	};
}
namespace Ncsoft
{
	class player
	{
	public:
		void showInfo() {
			cout << "엔씨소프트 플레이어입니다." << endl;

		}
	};
}

int main() {

	Nexon::player p1;
	Ncsoft::player p2;

	p1.showInfo();
	p2.showInfo();

	return 0;

}