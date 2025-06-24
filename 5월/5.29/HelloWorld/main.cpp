#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>



int main()
{
	//2-1배경: 간단한 은행 계좌 관리 시스템을 구현하세요.사용자는 계좌 개설부터 시작하여 입금, 출금, 잔액 조회 등의 작업을 수행할 수 있습니다.
	char name[100];
	int age, account, start_deposit, menu, count = 0;
	int transaction_count = 0;//거래횟수
	double total_money, money = 0;

	float rate = 3.0f;
	float interest_rate = 0.0;//이율 계산
	int Plus_amount;

	if (age >= 65)
	{
		interest_rate += 0.005;//65세 이상 :0.5% 추가
	}
	else if (age < 30)
	{
		interest_rate += 0.002;//30세 미만:0.2% 추가
	}
	rate += interest_rate;

	printf("==은행 계좌 관리 시스템==\n");
	printf("계좌 개설을 위해 정보를 입력하세요.\n");
	printf("고객이름:");
	scanf("%s", name);
	printf("\n나이:");
	printf("&d", &age);
	printf("\n초기 입금액:");
	scanf("%d", &start_deposit);

	printf("계좌가 성공적으로 개설되었습니다!\n");
	printf("고객명:%s(%d세)\n", name, age);
	printf("초기잔액:%d원\n", start_deposit);
	printf("적용 이율:%.1f%%(우대%.1f%%포함)\n\n", rate, interest_rate);


	do

	{
		printf("==메뉴==\n1:입금\n2:출금\n3:잔액조회\n4:이자계산\n5:계좌 정보 출력\n0:종료\n");
		printf("선택:%d");
		scanf("%d", &menu);
		printf("\n");



		switch (menu)
		{
		case 1:

			printf("입금할 금액을 입력하세요");
			scanf("%d", &money);

			if (money < 0)
			{
				printf("마이너스 입니다. 다시 입력하세요.");
			}
			else {

				Plus_amount += total_money;
				printf("입금이 완료되었습니다.\n");
				printf("현재 금액:%d원\n", total_money);
			}
			break;

		case 2:
			printf("출금할 금액:");
			scanf("%d", &money);

			if (money < 0)
			{
				printf("음수금액은 출금이 불가합니다.\n");
				break;
			}

			if (total_money < money)
			{
				printf("출금 가능 금액보다 많습니다.\n");
			}
			else
			{
				total_money -= money;
				printf("출금 완료.\n");
				count++;
				if (count > 5)
				{
					total_money -= 500;//유료 수수료
					printf("현재잔액:%d원\n", total_money);
					printf("거래횟수:%d회(유료)\n", count);
				}
				else
				{
					printf("현재 잔액:%d원\n", total_money);
					printf("거래횟수:%d회(무료)\n", total_money);
				}
			}
			break;
		case 3:
			printf("현재 계좌에 있는 금액: % d원\n", Plus_amount);
			break;
		case 4:
			printf("이번달 이자는 %.f원입니다.\n", Plus_amount * 0.01 * rate / 12);
			break;
		case 5:
			printf("계좌 정보를 출력합니다.\n");
			printf("고객명:%s(%d세)\n", name, age);
			printf("현재 잔액: % d원\n", total_money);
			printf("적용 이율:%1.f%%(우대 %.1f%% 포함\n", rate, interest_rate);
			break;

		case 0:
			printf("종료되었습니다.\n");
			break;
		default:
			printf("메뉴 범위를 벗어났습니다.\n");
		}
		printf("\n");

	} while (menu != 0);


   
    return 0;
        }





			
       
        

		

