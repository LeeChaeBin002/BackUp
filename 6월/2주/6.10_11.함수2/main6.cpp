//### ** 문제 6: 배열의 최대값과 최소값 찾기 * *

//포인터를 이용하여 배열의 최대값과 최소값을 찾아 각각 `max`와 `min` 포인터가 가리키는 위치에 저장하는 함수 `findMaxMin`을 작성하세요.

#include <stdio.h>
void findMaxMin(int* arr, int size, int* max, int* min) {

	if (size <= 0) return;
	*max = *arr;
	*min = *arr;

	for (int i = 1; i < size; ++i) {
		if (*(arr + i) > *max) {
			*max = *(arr + i);
		}
		if (*(arr + i) < *min) {
			*min = *(arr + i);
		}

	}
}


int main()

{

	int numbers[] = { 2, 3, 2, 3, 5 };

	int max, min;
	findMaxMin(numbers,5,&max,&min);

	printf("최대값: %d\n", max);
	printf("최소값: %d\n", min);

	return 0;

}