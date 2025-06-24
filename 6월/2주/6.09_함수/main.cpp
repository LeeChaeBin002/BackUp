#include <stdio.h>  

//.문제 1: 포인터 선언 및 간접 참조

//** 요구사항:**
//정수형 변수 `num`을 선언하고 값 10을 할당하세요.
//정수형 포인터 변수 `ptr`을 선언하고, `num`의 메모리 주소를 할당하세요.
//`num`의 값을 변수와 포인터를 사용하여 각각 한 번씩 출력하세요.

int main() {  
    int num = 10;  
    int* ptr_a;  
    ptr_a = &num;  

    printf("변수로 출력:%d\n", num);
    printf("포인터로 출력:%d\n", ptr_a);
}