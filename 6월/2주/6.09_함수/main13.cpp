#include <stdio.h>  


/*## 문제 13: 포인터 배열의 활용

//**요구사항:**
//정수형 변수 `a`, `b`, `c`를 선언하고 각각 100, 200, 300을 할당하세요.
//크기가 3인 포인터 배열 `ptr_arr`을 선언하세요.
//`ptr_arr`의 각 요소에 변수 `a`, `b`, `c`의 주소를 저장하세요.
//반복문을 사용하여 `ptr_arr`을 통해 변수 `a`, `b`, `c`의 값을 출력하세요.*/

int main() {  
    int a = 100, b = 200, c = 300;  
    int *ptr_arr[3]; // 포인터 배열  

    ptr_arr[0] = &a;  
    ptr_arr[1] = &b;  
    ptr_arr[2] = &c;  

    // 반복문을 사용하여 ptr_arr을 통해 변수 a, b, c의 값을 출력  
    for (int i = 0; i < 3; i++) {  
        printf("%d\n", *(ptr_arr+i)); // 포인터를 역참조하여 값을 출력  
    }  

    return 0;  
}