#include <stdio.h>



int main()
{
	//.9 게임 점수 기록 : 플레이어의 최근 7번의 게임 점수를 배열에 저장하고, 각 게임의 점수와 게임 번호를 출력하는 프로그램을 작성하세요. 	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int game_score[7] = { 100,250,300,150,400,350,500 };
	int i;
	printf("7번의 게임 점수를 입력하세요:");
	for (i = 0; i < 7; i++) 
	{
	printf("%d ", game_score[i]);

	}
	printf("\n== 게임 점수 기록==\n");
	for (i = 0; i < 7; i++) 
	{
		printf("게임%d:%d점\n", i + 1, game_score[i]);
	}

	printf("\n");
	return 0;
}

