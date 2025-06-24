#include "GameObject.h"
#include <string>  
#include <iostream> 
#include "Player.h"
#include "Enemy_.h"
#include "Item_.h"
using namespace std;

int main() {
    // GameObject g; // 오류! 추상 클래스는 인스턴스화 불가능

    Player player;
    Enemy_ enemy;
    Item_ item;

    cout << "게임 오브젝트 업데이트:" << endl;
    player.Update();
    enemy.Update();
    item.Update();

    return 0;
}