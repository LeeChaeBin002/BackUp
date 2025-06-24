#include <stdio.h>
#include <cmath>



int main()
{
	//3. 역순 출력 : 사용자로부터 5개의 정수를 입력받아 배열에 저장한 후, 역순으로 출력하는 프로그램을 작성하세요.
	int arr[5];
	printf("5개의 정수를 입력하세요:\n");
	for (int i = 0; i < 5; i++) 
	{
		scanf("%d", &arr[i]);
	}
		printf("역순 출력:");
	for (int i = 4; i>= 0;i--)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}