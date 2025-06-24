#include <stdio.h>

//**문제 1: 배열의 특정 값 존재 여부 확인**
//포인터를 이용하여 배열에 특정 `element`가 있으면 1을, 없으면 0을 반환하는 함수 `contains`를 작성하세요.

int contains(int* arr, int size, int element) {

	for (int i = 0; i < size; i++) {
	if (*(arr + i) == element) {
		return 1;
	}//element를 찾았을 경우

	return 0;
}


}
int main() 
{
	int numbers[] = { 1, 2, 3, 4, 5 };
	int result = contains(numbers, 5, 3);  // 3이 있는지 확인
	printf("결과: %d\n", result);  // 출력: 결과: 1

	result = contains(numbers, 5, 6);  // 6이 있는지 확인
	printf("결과: %d\n", result);  // 출력: 결과: 0

}