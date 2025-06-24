#include <stdio.h>



int main()
{
	//.5 배열 크기 계산 : sizeof 연산자를 사용하여 배열의 전체 크기와 요소 개수를 자동으로 계산하여 출력하는 프로그램을 작성하세요.
	int numbers[10];
	

	printf("int 배열의 전체크기:%lu 바이트\n", sizeof(numbers));
	printf("배열 요소의 크기:%lu 바이트\n", sizeof(numbers[0]));
	printf("배열 요소의 개수:%lu개\n", sizeof(numbers) / sizeof(numbers[0]));

	printf("\n");
	return 0;
}