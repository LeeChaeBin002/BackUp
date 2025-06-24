#include <stdio.h>

//2.### **문제 2: 배열의 특정 값 개수 계산**

//포인터를 이용하여 배열에서 특정 `element`의 개수를 반환하는 함수 `countElement`를 작성하세요.

int countElement(int* arr, int size, int element) {

	int count=0;
	for (int i = 0; i < size; ++i) {
		if (*(arr + i) == element) {
			count++;
		}
	}

		return count;

}
int main()

{
	int numbers[] = { 1, 3, 2, 3, 5 };
	int taget = 3;
	int result = countElement(numbers, 5, taget);

	printf("숫자 %d는 배열에 %d번 나타납니다.\n", taget, result);
	return 0;

}