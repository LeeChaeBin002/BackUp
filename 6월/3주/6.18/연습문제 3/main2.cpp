#include <iostream>
#include <string>
using namespace std;
//2.### 2. 중첩 네임스페이스

//Game 네임스페이스 안에 RPG와 FPS 네임스페이스를 만들고, 각각 Weapon 변수를 선언하세요.
//
//- Game::RPG::weapon = "마법 지팡이"
//- Game::FPS::weapon = "소총"

namespace Game
{
	namespace RPG
	{
		string weapon = "마법 지팡이";
	}

	namespace FPS {
		string weapon = "소총";
	}
}

int main() {

		cout << "RPG 무기: " << Game::RPG::weapon << endl;
		cout << "FPS 무기: " << Game::FPS::weapon << endl;

	return 0;

}