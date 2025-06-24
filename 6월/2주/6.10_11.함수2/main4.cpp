//### ** 문제 4: 배열의 두 요소 교환 * *

//포인터를 이용하여 배열에서 `index1` 위치와 `index2` 위치의 요소를 교환하는 함수 `swapElements`를 작성하세요.유효하지 않은 인덱스일 경우 아무 작업도 하지 않습니다.



#include <stdio.h>

void swapElements(int* arr, int size, int index1, int index2) {

	if (index1 < 0 || index1 >= size || index2 < 0 || index2 >= size) {
		return;
	}
	int temp = *(arr + index1);//arr[index1]도 가능
	*(arr + index1) = *(arr + index2);
	*(arr + index2) = temp;
}


int main()

{
	
	int numbers[] = { 1, 3, 2, 3, 5 };
	int size = sizeof(numbers) / sizeof(numbers[0]);
	swapElements(numbers, size, 1, 4);

	printf("배열 요소 교환 결과: ");
	for (int i = 0; i < size; ++i) {
		printf("%d ", numbers[i]);
	}
	printf("\n");

	return 0;

}