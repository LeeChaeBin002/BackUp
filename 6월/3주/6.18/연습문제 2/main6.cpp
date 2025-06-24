#include <iostream>
#include <string>
using namespace std;

int& findMaxLevel(int& level1, int& level2, int& level3)
{
    if (level1 >= level2 && level1 >= level3) {

        return level1;
    }
    else if (level2 >= level1 && level2 >= level3)
    {
        return level2;
    }
    else 
    {
        return level3;

    }
}

//6.## 문제 6. 최강 캐릭터 찾기

//레퍼런스를 반환하는 함수를 사용하여 가장 높은 레벨의 캐릭터를 찾고 스탯을 수정하세요.
//
//- 3명의 캐릭터 레벨을 입력받습니다
//- 가장 높은 레벨을 가진 캐릭터의 레퍼런스를 반환하는 함수를 작성합니다
//- 반환된 레퍼런스를 통해 해당 캐릭터의 레벨을 10 증가시킵니다
int main() 
{
    int level1, level2, level3;
    //입력값

    cin >> level1>> level2>> level3;
    cout << "캐릭터 레벨: " << level1 <<" "<< level2 <<" " << level3<<endl;
    int& maxLevel = findMaxLevel(level1, level2, level3);
    cout << "최고 레벨 캐릭터: " << maxLevel<<endl;
    maxLevel += 10;
    cout << "보너스 적용 후: " <<level1 << " " << level2 << " " << level3 << endl;

 

}