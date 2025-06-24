#include <stdio.h>



int main()
{
	//3. 홀수와 짝수 개수 세기 : 배열에 저장된 정수들 중 홀수와 짝수의 개수를 각각 세는 프로그램을 작성하세요.

	int arr[10];
	int i;
	int evencount=0;
	int oddcount=0;

	printf("10개의 정수를 입력하세요: ");
	for (i = 0; i < 10; ++i)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; ++i) 
	{
		if (arr[i] % 2 == 0) {
			evencount++;
		}
		else {
			oddcount++;
		}

	}
	printf("짝수 개수:%d개\n",evencount);
	printf("홀수 개수:%d개",oddcount);

	return 0;
	}
	



