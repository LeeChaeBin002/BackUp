#include <stdio.h>  

//8. 게임 시간 변환 함수 : 초 단위 시간을 입력받아 분과 초로 변환하는 함수 convertTime(int seconds)를 작성하세요.

void convertTime(int seconds) {

    int minutes = seconds / 60;
    int remainingSeconds = seconds % 60;

    printf("변환된 시간:%d분 %d초\n", minutes, remainingSeconds);
   
}

int main() {
    int seconds;
    printf("총 시간(초):");
    scanf("%d", &seconds);
  
    convertTime(seconds);
  

}