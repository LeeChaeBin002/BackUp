#include <stdio.h>  

/*## 문제 6: 이중 포인터의 이해

**요구사항:**
정수형 변수 `num`을 선언하고 777을 할당하세요.
`num`을 가리키는 포인터 `ptr`을 선언하세요.
`ptr`을 가리키는 이중 포인터 `dptr`을 선언하세요.
`num`, `*ptr`, `**dptr`을 각각 사용하여 `num`의 값을 출력하세요..*/

int main() {
    int num = 777;          
    int* ptr = &num;      
    int** dptr = &ptr;
    printf("변수로 출력: %d\n", num);
    printf("단일 포인터로 출력: %d\n", *ptr);
    printf("이중 포인터로 출력: %d\n", **dptr);

    return 0;
}