#include <stdio.h>

void argument(int* ptr) 
{//3
    *ptr = *ptr * 2;
}

int main(){
    
    int num=10;//1
    int* pNum=nullptr;//2
    argument(&num);//4.포인터를 2배로 만드는 함수에 인자로 넣어 동작
    pNum = &num;//5.포인터가 변수를 가리키게 할당
    argument(pNum);//6.5번+2배 만들기
    printf("%d", num);//7.1번에서 선언한 변수의 값

    return 0;
}
