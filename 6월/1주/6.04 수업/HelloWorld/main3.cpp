#include <stdio.h>
#include <cmath>



int main()
{
	//2.배열 요소 교환: 두 개의 인덱스를 입력받아 해당 위치의 배열 요소를 서로 교환하는 프로그램을 작성하세요
	int arr[5] = { 10, 20, 30, 40, 50 };
	int ix1,ix2;
	int temp;

	printf("원본 배열: ");
	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n교환할 인덱스 두 개를 입력하세요:\n");
	scanf("%d%d",ix1,ix2);

	//교환
	temp = arr[ix1];
	arr[ix1] = arr[ix2];
	arr[ix2] = temp;

	printf("교환 후 배열:\n");
		for(int i=0; i<10;i++){
			printf("%d", arr[i]);
	
	}
	printf("\n");

}
