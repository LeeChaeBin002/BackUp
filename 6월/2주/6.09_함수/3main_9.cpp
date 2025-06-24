#include <stdio.h>  

//9.체력 회복 함수: 현재 체력, 최대 체력, 회복량을 매개변수로 받아 회복 후 체력을 계산하는 함수 healPlayer(int currentHP, int maxHP, int healAmount)를 작성하세요. 최대 체력을 초과할 수 없습니다.

int healPlayer(int currentHP, int maxHP, int healAmount) {

    currentHP += healAmount;

    if (currentHP > maxHP) {
        currentHP = maxHP;
    }
    return currentHP;

}

int main() {
    int currentHP, maxHP, healAmount;
    printf("현재 체력:");
    scanf("%d", &currentHP);
    printf("최대 체력:");
    scanf("%d", &maxHP);
    printf("회복량: ");
    scanf("%d", &healAmount);
    int newHP = healPlayer(currentHP, maxHP, healAmount);
    printf("회복 후 체력: %d\n", newHP);

}