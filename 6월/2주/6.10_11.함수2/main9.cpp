//### ** 문제 9: 특정 값보다 작은 요소 개수 계산 * *

//포인터를 이용하여 배열에서 `value`보다 작은 요소의 개수를 반환하는 함수 `countLess`를 작성하세요.

#include <stdio.h>

int countGreater(int* arr, int size, int value) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (*(arr + i) < value) {
            count++;
        }
    }
    return count;
}

int main() {
    int source[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(source) / sizeof(source[0]);
    int value = 40;

    int result = countGreater(source, size, value);
    printf("%d보다 작은 요소의 개수: %d\n", value, result);

    return 0;
}