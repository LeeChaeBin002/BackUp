#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
//.6Player 클래스에서 this 포인터를 사용하여 매개변수와 멤버변수를 구분하세요.

//-setName(string name), setLevel(int level)
//- 각 setter에서 "this->멤버 = 매개변수" 형태 사용

class Player {
private:
    string name;
    int level;

public:
    void setName(string name) {
        this->name = name;  // this 포인터 사용
    }

    void setLevel(int level) {
        this->level = level;  // this 포인터 사용
    }

    void showInfo() {
        cout << "플레이어 이름: " << name << endl;
        cout << "플레이어 레벨: " << level << endl;
    }
};

int main() 
{
    Player p;
    p.setName("용사");
    p.setLevel(10);
    p.showInfo();

    return 0;


}
