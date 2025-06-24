#include <iostream>
#include <cstdlib>
using namespace std;
//### 14. GameManager 클래스

//게임 전체 상태를 관리하는 정적 클래스를 만드세요.
//
//- static bool isPlaying
//- static int currentLevel
//- static 메서드로만 접근
class GameManager {
private:
	static bool isPlaying;
	static int currentLevel;

public:

	static void startGame() {
		isPlaying = true;
		currentLevel = 1;
		cout << "게임시작!" << endl;

	}
	static void nextLevel() {
		if (isPlaying) {
			currentLevel++;
			cout << "다음 레벨로!" << endl;
		}
	}
	static void printLevel() {
		cout << "현재 레벨: " << currentLevel << endl;
	}
	static void endGame() {
		isPlaying = false;
		cout << "게임 종료!" << endl;
	}
	static void printStatus() {
		cout << "게임 상태: " << (isPlaying ? "진행 중" : "종료됨") << endl;
	}
};
// 정적 멤버 정의
bool GameManager::isPlaying = false;
int GameManager::currentLevel = 0;
int main()

{
	GameManager::startGame();
	GameManager::printLevel();

	GameManager::nextLevel();
	GameManager::printLevel();

	GameManager::endGame();
	GameManager::printStatus();
}
