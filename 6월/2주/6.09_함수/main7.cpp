#include <stdio.h>  

/*## 문제 7: 이중 포인터를 이용한 값 변경

**요구사항:**
정수형 변수 `target`을 선언하고 123을 할당하세요.
`target`을 가리키는 포인터 `p1`과 `p1`을 가리키는 이중 포인터 `p2`를 선언하고 연결하세요.
이중 포인터 `p2`만을 사용하여 `target`의 값을 456으로 변경하세요.
`target`의 최종 값을 출력하여 변경을 확인하세요.*/

int main() {
    int target = 123;
    int* p1 = &target;
    int** p2 = &p1;

    // 이중 포인터를 사용하여 target의 값을 456으로 변경
    **p2 = 456;

    printf("이중 포인터로 변경 후 target의 값: %d\n", target);

    return 0;
}