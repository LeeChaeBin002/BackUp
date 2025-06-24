#include <stdio.h>  

/*## 문제 9: 포인터 복사

**요구사항:**
정수형 변수 `original`을 선언하고 99를 할당하세요.
`original`을 가리키는 포인터 `p_org`를 선언하세요.
`p_org`를 복사하여 새로운 포인터 `p_copy`를 선언하고 초기화하세요.
복사된 포인터 `p_copy`를 사용하여 `original`의 값을 0으로 변경하세요.
원래 포인터 `p_org`를 통해 `original`의 값을 출력하여 변경되었는지 확인하세요.*/

int main() {
    int original = 99;
    int* p_org = &original;
    int* p_copy = p_org;
    *p_org = 0;
   
    printf("복사된 포인터로 변경 후 값:%d \n", *p_org);
}