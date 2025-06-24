#include <stdio.h>  

//5.함수의 필요성 - 코드 중복 제거 : 다음과 같은 중복 코드를 함수로 만들어 개선하세요.HP가 감소하고 상태를 출력하는 기능을 takeDamage(int* currentHP, int damage) 함수로 만드세요.
int takeDamage(int* currentHP, int damage) {
    *currentHP -= damage;
    printf("데미지를 받았습니다! 현재 HP: %d\n", *currentHP); 
    return *currentHP;
}

int main() {
    int HP = 100;

    takeDamage(&HP, 10);
    takeDamage(&HP, 15);
    takeDamage(&HP, 10);

}