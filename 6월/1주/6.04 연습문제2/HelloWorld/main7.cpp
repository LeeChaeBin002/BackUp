#include <stdio.h>



int main()
{
	//7.배열 초기화 비교 : 다음 세 가지 방법으로 배열을 초기화하고 결과를 비교하는 프로그램을 작성하세요.	int numbers[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int numbers[5] = { 1,2,3,4,5 };
	int numbers2[5] = { 1,2,3 };
	int numbers3[5] = { };
	printf("전체 초기화:");
	int i;
	
	for ( i = 0; i < 5; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n부분 초기화:");
	for(i=0;i<5;++i)
	{

	printf("%d ", numbers2[i]);
	}
	printf("\n0으로 초기화:");
	for (i = 0; i < 5; ++i) 
	{
		printf("%d ", numbers3[i]);
	}
	printf("\n");
	return 0;
}

