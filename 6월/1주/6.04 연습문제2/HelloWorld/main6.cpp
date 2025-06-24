#include <stdio.h>



int main()
{
	//5. 중복 제거 : 배열에서 중복된 값을 찾아 표시하는 프로그램을 작성하세요.
	int arr[10];
	int dup[10];
	int i, j, d = 0;
	bool isDuplicate[10] = { false };


	printf("10개의 정수를 입력하세요:\n");
	for (i = 0; i < 10; ++i)
	{
		scanf("%d", &arr[i]);

	}


	for (i = 0; i < 10; ++i) {
		if (isDuplicate[i]) continue;

		for (j = i + 1; j < 10; j++)//오름차순 정렬
		{
			if (arr[i] == arr[j]) {
				dup[d++] = arr[i];
				isDuplicate[j] = true;  // 중복된 인덱스 표시
				break;  // 중복을 찾았으면 더 이상 찾을 필요 없음



			}
		}
	}
	//버블정렬
	//i:전체정렬 바퀴수 d:중복된 값 개수
	//i가 1 증가할 때마다 맨 뒤에 하나씩 정렬 완료
	//그래서 j의 비교 범위를 n - 1 - i로 줄여서
    //정렬된 곳은 비교하지 않음

	for (i = 0; i < d - 1; i++) {
		for (j = 0; j < d - 1 - i; j++) {
			if (dup[j] > dup[j + 1]) {
				int temp = dup[j];
				dup[j] = dup[j + 1];
				dup[j + 1] = temp;
			}
		}
	}
	printf("중복된 값: ");
	for (i = 0; i < d; i++) {
		if (i == 0 || dup[i] != dup[i - 1]) {
			printf("%d ", dup[i]);
		}
	}
	printf("\n");

}





