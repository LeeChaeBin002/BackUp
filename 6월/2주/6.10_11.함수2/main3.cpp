//### ** 문제 3: 배열의 특정 범위 합 계산 * *
//포인터를 이용하여 배열에서 start 인덱스부터 
// end 인덱스까지의 요소의 합을 반환하는 함수 calculateRangeSum을 작성하세요.



#include <stdio.h>

int calculateRangeSum(int* arr, int start, int end) {

	int sum = 0;
	for (int i = 0; i <= end; ++i) {
		sum += *(arr + i);
		}
	return sum;
	}



int main()

{
	int numbers[] = { 1, 3, 2, 3, 5 };

	int result = calculateRangeSum(numbers, 0, 5);

	printf("인덱스 %d부터 %d까지의 합: %d \n", 0 ,5, result);
	return 0;

}