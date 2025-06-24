#include <stdio.h>
#include <cmath>



int main()
{
	//1. 배열 선언과 출력 : 크기가 5인 정수 배열을 선언하고 1, 2, 3, 4, 5로 초기화한 후 모든 요소를 출력하는 프로그램을 작성하세요.
	int arr[5] = { 1,2,3,4,5 };
		printf("배열의 요소들:" );
	for (int i = 0; i < 5; i++) 
	{
		printf("%d", arr[i]);

	}


}

// 6번은 for문으로 입력해