#include <stdio.h>  

//6. 플레이어 레벨업 함수 : 현재 경험치를 매개변수로 받아 레벨을 계산하는 함수 calculateLevel(int exp)를 작성하세요. (경험치 100당 레벨 1)
int calculateLevel(int exp) {  
    int nextLevelExp = ((exp / 100) + 1) * 100;  
    return nextLevelExp - exp;  
}  

int main() {  
    int exp;  
    printf("현재 경험치를 입력하세요:");  
    scanf("%d", &exp);  
    int level = exp / 100;  
    int needExp = calculateLevel(exp);  
    printf("현재 레벨:%d\n", level);  
    printf("다음 레벨까지 필요한 경험치: %d\n", needExp);  
}