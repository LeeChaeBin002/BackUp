#include <iostream>
#include <cstdlib>
using namespace std;
//### 11. GameSettings 클래스

//게임 설정 클래스에서 const 멤버를 초기화하세요.
//
//- const int maxPlayers(최대 플레이어 수)
//- const string gameName(게임 이름)
//- 멤버 초기화 리스트 사용 필수
class GameSettings {
private:
	const int maxPlayers;
	const string gameName;

public:
	GameSettings(int max,string name)
		:maxPlayers(max),gameName(name){ }
	void printSettings() const {
		cout << "게임 이름: " << gameName << endl;
		cout << "최대 플레이어: " << maxPlayers << "명" << endl;
		cout << "설정을 변경할 수 없습니다 (const)" << endl;
	}

};

int main()

{
	GameSettings settings(4, "던전 탐험");
	settings.printSettings();

	
}
