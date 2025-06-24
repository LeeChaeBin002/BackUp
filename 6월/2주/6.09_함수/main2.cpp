#include <stdio.h>  

/*## 문제 2: 포인터를 이용한 값 변경

* *요구사항 : **
정수형 변수 `value`를 선언하고 값 20을 할당하세요.
정수형 포인터 `p_val`을 선언하고 `value`의 주소를 가리키게 하세요.
포인터 `p_val`을 사용하여 `value`의 값을 50으로 변경하세요.
최종적으로 `value`의 값을 출력하여 변경되었는지 확인하세요.*/

int main() {
    int value = 20;
    int* P_val;
    P_val = &value;
    value = 50;

    printf("변경 후 value의 값:%d\n", *P_val);
}