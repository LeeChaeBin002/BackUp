//### ** 문제 10: 특정 값의 마지막 위치 찾기 * *

//포인터를 이용하여 배열에서 `value`와 같은 마지막 요소의 인덱스를 반환하는 함수 `findLast`를 작성하세요.만약 `value`가 배열에 없는 경우, -1을 반환해야 합니다.

#include <stdio.h>

int findLast(int* arr, int size, int value) 
{
    int index = -1;
    int* ptr = arr;

   
    for (int i = 0; i < size; i++,ptr++) {
        if (*ptr == value) 
        {
            index=i;
        }
    }
    return index;
}

int main() {
    int source[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(source) / sizeof(source[0]);
    int value = 20;

    int result = findLast(source, size, value);
    printf("마지막 인덱스: %d\n", result);

    return 0;
}