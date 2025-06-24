#include <stdio.h>
#include <cmath>



int main()
{
	//1. 최대값과 최소값 찾기 : 사용자로부터 10개의 정수를 입력받아 배열에 저장하고, 최대값과 최소값을 찾아 출력하는 프로그램을 작성하세요.
	int arr[10];
	int i,max,min;
		printf("10개의 정수를 입력하세요:\n");
		for (i = 0; i < 10; ++i) 
		{
			scanf("%d",&arr[i]);
		}

		max = arr[0];
		min = arr[0];
		for (i = 1; i < 10; ++i) 
		{
			if (arr[i] > max) 
			{
				max = arr[i];
			}
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
		printf("\n최대값:%d\n", max);
		printf("최소값:%d\n", min);



}

// 6번은 for문으로 입력해