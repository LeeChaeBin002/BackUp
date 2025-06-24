#include <stdio.h>  

//4. 게임 점수 계산 함수 : 기본 점수와 보너스 점수를 매개변수로 받아 총 점수를 계산하는 함수 calculateScore(int baseScore, int bonusScore)를 작성하세요.

int calculateScore(int baseScore, int bonusScore) {
    return baseScore + bonusScore; // 수정: 총 점수를 반환하도록 수정
}

int main() {
    int num1 = 0, num2 = 0; // 수정: 초기화되지 않은 변수 문제 해결을 위해 초기값 설정
    printf("기본 점수: ");
    scanf("%d", &num1); // 수정: 사용자 입력을 먼저 받아야 출력 가능
    printf("보너스 점수: ");
    scanf("%d", &num2); // 수정: 사용자 입력을 먼저 받아야 출력 가능

    printf("총 점수: %d\n", calculateScore(num1, num2));

    return 0;
}