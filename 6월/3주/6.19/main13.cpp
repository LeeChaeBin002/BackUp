#include <iostream>  
#include <cstdlib>  
using namespace std;  
//### 13. Enemy 클래스  

//적 캐릭터의 전체 수를 관리하는 클래스를 만드세요.  
//  
//- static int totalEnemies  
//- 생성자에서 증가, 소멸자에서 감소  
//- static 메서드로 총 개수 반환  
class Enemy {  
private:  
	string name;  

	static int totalEnemies;  

public:  
	Enemy(string _name):name(_name)   
	{  
		totalEnemies++;  
		cout << name << " 적 생성! 현재 적 수: " << totalEnemies << endl;  
	}  
	~Enemy() {  
		totalEnemies--;  
		cout << name << " 적 처치! 현재 적 수: " << totalEnemies << endl;  
	}  

	static int getTotalEnemies() {  
		return Enemy:: totalEnemies=0;  
	}  

};  

int Enemy::totalEnemies = 0; // static 변수 초기화  

int main()  
{  
	Enemy* e1 = new Enemy();
	Enemy* e2 = new Enemy();
	Enemy* e3 = new Enemy();

	delete e2;  

	cout<<"남은 적 수:"<< Enemy::getTotalEnemies() << endl;


	return 0;  
}
