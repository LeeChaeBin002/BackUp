#include <stdio.h>



int main()
{
	//4. 배열 정렬 (버블 정렬): 5개의 정수를 입력받아 오름차순으로 정렬하는 프로그램을 작성하세요.

	int arr[5];
	int i,j;
	int temp;


	printf("5개의 정수를 입력하세요:\n");
	for (i = 0; i < 5; ++i)
	{
		scanf("%d", &arr[i]);

	}

	printf("정렬 전:");
	for (i = 0; i < 5; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i = 0; i < 4; i++)//오름차순 정렬
	{
		for (j = 0; j < 4-i; j++) {//4-i인 이유는 한바퀴 돌때마다 가장 큰값이 맨뒤로 가서
			if (arr[j] > arr[j + 1])//값>이웃값 즉 값이 더 크면
			{
				temp = arr[j];//가상값에 값을 저장
				arr[j] = arr[j + 1];; //값<->이웃값 체인지
				arr[j + 1] = temp;//이웃값
			}
		}

	}

	printf("정렬 후:");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}




