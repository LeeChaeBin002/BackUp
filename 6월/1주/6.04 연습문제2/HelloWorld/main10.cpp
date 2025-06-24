#include <stdio.h>



int main()
{
	//10.배열 범위 초과 실험: 크기가 5인 배열을 선언하고, 의도적으로 범위를 초과하여 접근할 때 어떤 일이 발생하는지 관찰하는 프로그램을 작성하세요.
	int arr[5] = { 10,20,30,40,50 };
	int i;
	printf("정상 범위 내 접근:\n");

	for (i = 0; i < 5; i++)
	{
		
		printf("\narr[%d]=%d ", i, arr[i]);

	}
	printf("\n\n정상 범위 외 접근:\n");
	for (i = 5; i < 10; i++)
	{

		printf("\narr[%d]=%d ", i, arr[i]);

	}

	printf("\n");
	return 0;
}

