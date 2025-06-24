#include <stdio.h>
#include <cmath>



int main()
{
	//.4 배열 평균 구하기 : 실수형 배열을 사용하여 학생 5명의 점수를 입력받고 평균을 계산하는 프로그램을 작성하세요.평균은 소수점 둘째 자리까지 출력하세요.	int arr[5];
	float arr[5];
	float sum=0.0;
	float average;
	printf("5명의 점수를 입력하세요:\n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%f", &arr[i]);
		sum += arr[i];
	}
	average = sum / 5;
	printf("평균 점수:%.2f점", average);
	printf("\n");
	return 0;
}