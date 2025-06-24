#include <iostream>
#include "Score.h"
#include "Shop.h"
#include "Weapon.h"
#include "Vector2D.h"
#include "Gold.h"
#include "GameTime.h"
using namespace std;


int main() {

    Weapon w1("철검", 10);
    w1.print();
    w1.upgrade();
    w1.print();

    const Weapon w2("나무검", 5);
    std::cout << "const 무기 정보: " << w2.getName()
        << " (공격력: " << w2.getDamage() << ")" << std::endl;
    Score s1(100);
    s1.print();          // 현재 점수: 100 (등급: B)
    s1.addScore(50);     // 50점 추가!
    s1.print();          // 현재 점수: 150 (등급: A)

      // ### 16. Score 클래스

      // 점수를 관리하는 클래스에서 const 객체 사용을 연습하세요.
      //  - getScore() const, getRank() const
      // - addScore() - 일반 메서드


    const Score topScore(150);
    std::cout << "최고 점수 기록: " << topScore.Getscore()
        << " (등급: " << topScore.GetRank() << ")" << std::endl;

    std::cout << "(const 객체는 점수 변경 불가)" << std::endl << std::endl;

    
    //### 17. Shop 클래스

//상점 클래스의 선언과 정의를 분리하세요.
//
//- 클래스 내부 : 메서드 선언만
//- 클래스 외부 : 메서드 정의
//- buyItem(), sellItem(), showGold()

    Shop myShop(1000);
    myShop.showGold();     // 현재 골드: 1000

    myShop.buyitem(100);    // 아이템 구매! -100골드
    myShop.showGold();     // 현재 골드: 900

    myShop.sellItem(50);   // 아이템 판매! +50골드
    myShop.showGold();     // 현재 골드: 950
    cout << endl;

    /*### 18. Vector2D 클래스

    2D 좌표 클래스에 연산자를 오버로딩하세요.

    - operator+, operator-
    - operator== (같은 좌표인지 확인)
    - operator<< (출력용)*/

    Vector2D pos1(10, 20);
    Vector2D pos2(5, 10);

    cout << "pos1: " << pos1 << endl;
    cout << "pos2: " << pos2 << endl;

    Vector2D added = pos1 + pos2;
    Vector2D subtracted = pos1 - pos2;

    cout << "pos1 + pos2 = " << added << endl;
    cout << "pos1 - pos2 = " << subtracted << endl;

    cout << "pos1 == pos2 ? " << (pos1 == pos2 ? "예" : "아니오") << endl;
    cout << endl;


    //19.### 19. Gold 클래스

 /*   게임 머니를 관리하는 클래스에 연산자를 오버로딩하세요.

        -operator+, operator-, operator+=
        -operator>, operator<
        -operator<< (출력용)*/
    Gold wallet1(500);
    Gold wallet2(300);

    cout << "지갑1: " << wallet1 << endl;
    cout << "지갑2: " << wallet2 << endl;

    Gold sum = wallet1 + wallet2;
    Gold diff = wallet1 - wallet2;

    cout << "합계: " << sum << endl;
    cout << "차액: " << diff << endl;

    cout << "지갑1 > 지갑2 ? " << (wallet1 > wallet2 ? "예" : "아니오") << endl;

    wallet1 += 100;
    cout << "지갑1에 100골드 추가: " << wallet1 << endl;
    cout << endl;
    //### 20. GameTime 클래스

    /*게임 시간을 관리하는 클래스에 비교 연산자를 오버로딩하세요.

        - 시간을 분 단위로 저장(예: 90 = 1시간 30분)
        - operator>, operator<, operator==
        -operator<< (시:분 형태로 출력)*/

    GameTime playTime1(90);   // 1시간 30분
    GameTime playTime2(135);  // 2시간 15분

    cout << "시간1: " << playTime1 << endl;
    cout << "시간2: " << playTime2 << endl;

    cout << "시간1 < 시간2 ? " << (playTime1 < playTime2 ? "예" : "아니오") << endl;
    cout << "시간1 == 시간2 ? " << (playTime1 == playTime2 ? "예" : "아니오") << endl;
    cout << "더 긴 플레이 시간: " << playTime2 << endl;

   

    return 0;

}