#include <stdio.h>



int main()
{
	//6. 짝수 인덱스 요소 출력 : 크기가 10인 배열에 1부터 10까지의 값을 저장하고, 짝수 인덱스(0, 2, 4, 6, 8)에 있는 요소만 출력하는 프로그램을 작성하세요
	int numbers[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	printf("전체배열:");
	for (i = 0; i < 10; i++) 
	{
	printf("%d ", numbers[i]);
	}
	printf("\n");
	printf("짝수 인덱스 요소:");
	for ( i = 0; i < 10; i+=2) 
	{
		printf("%d ",numbers[i]);

	}
	printf("\n");
	return 0;
}

// 2옵션 문제5는 찾아서 풀기\