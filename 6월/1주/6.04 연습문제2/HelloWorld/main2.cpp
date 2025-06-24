#include <stdio.h>
#include <cmath>



int main()
{
	//1.특정 값 검색: 크기가 10인 배열에 임의의 값을 저장하고, 사용자가 입력한 값이 배열에 있는지 검색하는 프로그램을 작성하세요.
	int arr[10] = { 10, 25, 30, 45, 50, 65, 70, 85, 90, 100 };
	int i;
	int target;
	int found = 0;

	printf("배열: ");
	for (i = 0; i < 10; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n찾을 값을 입력하세요:\n");
	
	scanf("%d",&target);
	for(i = 0; i < 10 ; ++i)
	{
		if (arr[i] == target) 
		{
			printf("%d는 배열의 %d번째 위치(인덱스%d)에 있습니다.",target,i+1,i);
			
			found = 1;
			break;
		}
	}

}
