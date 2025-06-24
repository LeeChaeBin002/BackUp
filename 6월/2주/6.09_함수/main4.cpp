#include <stdio.h>  

/*## 문제 4: 변수의 주소 출력

**요구사항:**
실수형 변수 `f_num`을 선언하고 3.14를 할당하세요.
실수형 포인터 `p_fnum`을 선언하고 `f_num`의 주소를 할당하세요.
`f_num`의 메모리 주소를 `&` 연산자와 포인터 
변수 `p_fnum`을 이용해 각각 출력하세요. 
(주소 값은 실행 환경마다 다를 수 있습니다.)*/

int main() {
    double f_num = 3.14;
    double* P_fnum;
    P_fnum = &f_num;
    printf("&f_num으로 출력한 주소:0x%p\n", &f_num);
    
    printf("p_fnum으로 출력한 주소:0x%p\n", P_fnum);

}