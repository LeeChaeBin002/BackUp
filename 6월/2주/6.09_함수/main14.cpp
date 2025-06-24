#include <stdio.h>  


/*## 문제 14: 포인터 배열과 문자열

**요구사항:**`"C"`, `"Java"`, `"Python"` 세 개의 문자열을 저장하는 이차원 `char` 배열 `subjects`를 선언하세요.
크기가 3인 `char` 포인터 배열 `p_sub`를 선언하세요.
반복문을 사용하여 `p_sub`의 각 요소가 `subjects`의 각 문자열을 가리키게 하세요.
`p_sub` 배열을 사용하여 저장된 모든 문자열을 출력하세요.*/

int main() {  
    char subjects[3][10] = {"C", "Java", "Python"};    
    char* p_sub[3];  

    for (int i = 0; i < 3; i++) {  
        p_sub[i] = subjects[i];  
    }  

    for (int i = 0; i < 3; i++) {  
        printf("%s\n", p_sub[i]);  
    }  

    return 0;  
}