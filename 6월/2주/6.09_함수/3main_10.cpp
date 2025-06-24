#include <stdio.h>  

// 10. 멀티 함수 활용 - 캐릭터 정보 출력 : 플레이어의 이름, 레벨, 체력을 각각 출력하는 함수들을 만들고 모두 호출하는 프로그램을 작성하세요.

void printPlayerName(char name[]) {
    printf("플레이어 이름: %s\n", name);
}

void printPlayerLevel(int level) {
    printf("플레이어 레벨: %d\n", level);
}

void printPlayerHP(int hp) {
    printf("플레이어 체력: %d\n",hp);
}

int main() {
    char name[50];
    int level, hp;
    scanf("%s %d %d", name, &level, &hp);
    printf("=== 캐릭터 정보===\n");
    printPlayerName(name);
    printPlayerLevel(level);
    printPlayerHP(hp);


 

}