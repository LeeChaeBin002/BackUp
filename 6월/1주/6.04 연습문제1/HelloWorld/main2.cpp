#include <stdio.h>
#include <cmath>



int main() 
{
	//2. 배열 요소 합계 : 크기가 10인 정수 배열을 선언하고 사용자로부터 10개의 정수를 입력받아 저장한 후, 모든 요소의 합을 구하는 프로그램을 작성하세요.
	int arr[10];
	int sum = 0;
	printf("10개의 정수를 입력하세요:\n");
		for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
		

	}
		printf("배열 요소의 합: %d\n", sum);
			return 0;
}