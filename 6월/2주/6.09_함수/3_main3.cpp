#include <stdio.h>  

//3. 반환값이 있는 함수 : 두 정수를 매개변수로 받아 더한 값을 반환하는 함수 addNumbers(int a, int b)를 작성하고, main에서 호출하여 결과를 출력하세요.
int addNumbers(int a, int b) 
{ 
    return a + b; 
}

int main() {  
    int num1, num2;  
    scanf("%d%d", &num1, &num2);
    
    printf("첫 번째 수: %d\n", num1);  
    printf("두 번째 수: %d\n", num2);  
    printf("두 수의 합: %d\n", addNumbers(num1, num2));  

    return 0;  
}