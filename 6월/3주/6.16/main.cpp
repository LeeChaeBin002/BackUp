#include <stdio.h>  
#include <string>
#include <vector>

struct Gameitem
{
	char name[100];
	int price;
	int quantity;

};
struct Time
{
	int h;
	int m;
	int s;
};
int toSeconds(const Time t) {
	return  3600*t.h + t.m * 60 + t.s;
}
int main() {  

	//1.### 1. **좌표 구조체 기본**  

	//익명 구조체를 사용하여 게임 캐릭터의 2D 좌표를 저장하고 출력하는 프로그램을 작성하세요.  

	/*struct { float x,y; }pos;  
	{  
		pos.x = 10.5;  
		pos.y = 20.3;  

		printf("%.1f,%.1f\n", pos.x, pos.y);  
	};*/  

	//2.### 2. **학생 정보 구조체**  

	//이름(최대 50자), 학번, 점수를 저장하는 Student 구조체를 정의하고, 한 명의 학생 정보를 초기화하여 출력하세요.  

	/*struct My
	{  
		char name[100];  
		int studentNumber;  
		float score;  
	};  

	struct My student = {"김철수", 20241234, 87.5};  

	printf("이름: %s\n학번: %d\n점수: %.1f점\n", student.name, student.studentNumber, student.score);*/  

	//.3### 3. **게임 아이템 구조체**

	//아이템명(최대 30자), 가격, 수량을 가진 GameItem 구조체를 만들고, 3개의 아이템을 초기화하여 인벤토리를 출력하세요.
	
	/*Gameitem n1 = { "체력포션",100,5};
	Gameitem n2 = { "마나포션",150,3};
	Gameitem n3 = { "부활깃털",500,1 };

	
	printf("=== 인벤토리 ===\n");
	printf("1. %s-가격%d원,수량:%d개\n", n1.name,n1.price,n1.quantity);
	printf("2. %s-가격%d원,수량:%d개\n", n2.name, n2.price, n2.quantity);
	printf("3. %s-가격%d원,수량:%d개\n", n3.name, n3.price, n3.quantity);*/

	// 4. * *시간 구조체 활용 * *

	//시(h), 분(m), 초(s)를 저장하는 Time 구조체를 만들고, 시간을 초 단위로 변환하여 출력하세요.
	

	Time t = { 1,23,45 };
	int totalSeconds = toSeconds(t);
	printf("시간: %d시간 %d분 %d초\n",t.h,t.h,t.s);
	printf("총 초:%d초", totalSeconds);


	//5. ### 5. **도서 정보 관리**

	// 제목(최대 100자), 저자(최대 50자), 가격을 가진 Book 구조체를 정의하고, 2권의 책 정보를 출력하세요.

	struct library
	{
		char n1[100];
		char n2[100];
		char n3[100];
		int price=0;
	};
	library name1 = { "도서1","C++ 프로그래밍","-홍길동 저",25000 };
	library name2 = { "도서2","게임 개발 입문","-김개발 저",30000 };

	printf("%s:%s%s,%d원\n",name1.n1, name1.n2, name1.n3, name1.price);
	printf("%s:%s%s,%d원\n", name2.n1, name2.n2, name2.n3, name2.price);

	return 0;  
}
