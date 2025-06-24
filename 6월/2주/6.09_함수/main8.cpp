#include <stdio.h>  

/*## 문제 8: 포인터를 이용한 두 변수의 값 교환

**요구사항:**
두 정수형 변수 `val1`과 `val2`를 선언하고 각각 10, 20을 할당하세요.
`val1`을 가리키는 포인터 `p1`과 `val2`를 가리키는 포인터 `p2`를 선언하세요.
임시 변수(temp)를 하나 사용하고, 포인터 `p1`, `p2`만을 이용하여 `val1`과 `val2`의 값을 서로 교환하세요.
교환 후 `val1`과 `val2`의 값을 출력하세요.*/

int main() {
    int val1 = 10, val2 = 20;
    int* p1 = &val1;
    int* p2 = &val2;

    // 교환 전 출력
    printf("교환 전: val1=%d, val2=%d\n", val1, val2);

    // 값 교환
    int temp = *p1; // temp에 p1이 가리키는 값 저장
    *p1 = *p2;      // p1이 가리키는 값에 p2가 가리키는 값 저장
    *p2 = temp;     // p2가 가리키는 값에 temp 저장

    // 교환 후 출력
   
    printf("교환 후: val1=%d, val2=%d\n", val1, val2);

    return 0;
}