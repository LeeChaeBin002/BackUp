#include <stdio.h>



int main()
{
	//8.월별 일수 저장 : 12개월의 일수를 배열에 저장하고, 사용자가 입력한 월의 일수를 출력하는 프로그램을 작성하세요. (평년 기준)
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int month;
	
	printf("월을 입력하세요(1-12):");
	scanf("%d", &month);

	if (month >= 1 && month <= 12)
	{
		printf("%d월은 %d일입니다.\n", month, days[month - 1]);
	}
	printf("\n");
	return 0;
}

