#include <stdio.h>  

// 2. 매개변수가 있는 함수: 플레이어 이름을 매개변수로 받아서 환영 메시지를 출력하는 함수 welcomePlayer(char playerName[])를 작성하세요.

void welcomePlayer(char playerName[]) {
    printf("환영합니다, %s님!\n", playerName); // %s를 사용하여 문자열 출력
}

int main() {
    char playerName[50]; // 플레이어 이름을 저장할 배열 선언

    printf("플레이어 이름을 입력하세요: ");
    scanf_s("%49s", playerName); // scanf_s를 사용하여 안전하게 문자열 입력

    welcomePlayer(playerName); // 입력받은 이름을 함수에 전달
    return 0;
}