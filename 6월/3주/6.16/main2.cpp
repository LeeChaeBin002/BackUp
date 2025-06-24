#include <stdio.h>  
#include <string>
#include <vector>


struct TestA
{
    char a;
    int b;
    char c;
};

struct TestB
{
    char a;
    char b;
    int c;
};

struct TestC
{
    int a;
    char b;
    char c;
};

struct Version1 {
    char level;
    int Hp;
    char grade;
    int mp;
  
};
struct Version2 {
    char level;
    char grade;
    int Hp;
    int mp;

};
struct XY {
    
    int x;
    int y;

};
struct character {
    char name[100];
    int Hp=100;
    int Mp=50;
};

struct Monster {
    char n1[100];
    char n2[100];
    int Hp;
};

struct Score {
    char score_name[100];
    int score_number;

};

struct Result {
    char result_name[100];
    int  result_namber;

};
Result* findTop(Result* arr, int size) {
    if (size <= 0) return NULL;

    Result* top = arr;  // 첫 번째를 최고라고 가정

    for (int i = 1; i < size; i++) {
        if ((arr + i)->result_namber > top->result_namber) {
            top = arr + i;  // 더 높은 점수를 발견하면 갱신
        }
    }

    return top;
}

struct Vector2D {

    double x;
    double y;
};
Vector2D addVector(Vector2D a, Vector2D b) {
    Vector2D result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

double getLength(Vector2D v) {
    return sqrt(v.x * v.x + v.y * v.y);
}
struct Point
{
    int x,y;
};

void Swap(Point* a, Point* b) {
    Point temp = *a;
    *a = *b;
    *b = temp;
};
struct Student
{
    char student[100];
    int score;
};
Student* FindTopStudent(Student students[], int size)
{
    if (size <= 0)return NULL;
    Student* top_ = &students[0];

    for (int i = 1; i < size; i++) {
        if (students[i].score > top_->score) 
        {
            top_ = &students[i];  // 더 높은 점수를 발견하면 갱신
        }
    }
    return top_;
};
struct RPGCharacter
{
    char RPG_name[100];
    int Level;
    int Hp, maxHp;
    int Mp, maxMp;
    int attak, defense;
};
void printStatus(RPGCharacter* rpg) {

    printf("=== 캐릭터 상태 ===\n");
    printf("이름: %s\n", rpg->RPG_name);
    printf("레벨: %d,Hp: %d/%d,Mp: %d/%d\n", rpg->Level, rpg->Hp, rpg->maxHp, rpg->Mp, rpg->maxMp);
    printf("공격력:%d,방어력:%d\n", rpg->attak, rpg->defense);
}
    void levelUp(RPGCharacter * rpg) 
    {
        rpg->Level += 1;
        rpg->maxHp += 50;
        rpg->Hp = rpg->maxHp;
        rpg->maxMp += 20;
        rpg->attak += rpg->attak / 10;
        rpg->defense += rpg->defense / 10;


        printf("\n레벨업!\n");
        printf("레벨:%d,Hp: %d/%d,Mp: %d/%d\n:",rpg->Level, rpg->Hp, rpg->maxHp,rpg->maxHp,rpg->maxMp);
        printf("공격력:%d,방어력:%d\n",rpg->attak,rpg->defense);
    }

    struct Rectangle
    {
        double width = 10, height = 5;//가로 세로
        int extent, cir;//넓이 둘레

    };
    //넓이 계산 함수
    double getArea(Rectangle rect) {

        return rect.width * rect.height;
    }
    //둘레 계산 함수 2*(가로+세로)
    double getPerimeter(Rectangle rect)
    {
        return 2 * (rect.width + rect.height);
    }

    struct GameObject
    {
        char player[20];
        int HP,maxHp;
        int attak_Damage;
        int heal;
        int Status;
    };
    //상태 출력 함수
    void print_Status(GameObject* obj) {
        printf("플레이어 생성:%s(HP:%d/%d)\n\n", obj->player, obj->HP, obj->maxHp);

    }
    //데미지 받기 함수
    void takeDamage(GameObject* obj, int damage) {
        obj->HP -= damage; //게임오브젝트형 포인터는 접근연산자로 Hp를 가리킨다.
        if (obj->HP < 0)
            obj->HP = 0;
        printf("%d 데미지를 받았습니다!\n", damage);
        print_Status(obj);
    }
    //회복 함수
    void heal(GameObject* obj, int amount) {
        int before = obj->HP;
        obj->HP += amount;
        if (obj->HP > obj->maxHp) {
            obj->HP = obj->maxHp;
            printf("%d 회복했습니다!(최대 Hp 초과)\n", amount);
        }
        else {
            printf("%d 회복했습니다!\n", amount);
        }
        print_Status(obj);
    }


int main()
{
    // 6. **구조체 크기 확인**
    // 다음 3개의 구조체를 만들고 각각의 크기를 출력하세요:

    printf("TestA 크기: %zu 바이트\n", sizeof(TestA));
    printf("TestB 크기: %zu 바이트\n", sizeof(TestB));
    printf("TestC 크기: %zu 바이트\n", sizeof(TestC));

    //### 7. **메모리 패딩 실습**
   //Player 구조체를 두 가지 방식으로 정의하고 크기 차이를 확인하세요 :
    printf("Version1 크기: %zu 바이트\n", sizeof(Version1));
    printf("Version2 크기: %zu 바이트\n", sizeof(Version2));
    printf("메모리 절약: %zu 바이트\n", sizeof(Version1) - sizeof(Version2));

    //### 8. * *주소 출력 실습 * *
    //  좌표 구조체(x, y)를 만들고, 구조체와 각 멤버의 주소를 출력하세요.
    XY point = { 10,20 };
    printf("구조체 전체 주소:%p\n", &point);
    printf("x멤버 주소:%p\ny멤버 주소:%p\n", &point.x, &point.y);
    printf("주소 차이:%ld바이트\n", (long)((char*)&point.y - (char*)&point.x));

    //### 9. * *포인터로 구조체 접근 * *
    //Character 구조체(이름, HP, MP)를 만들고, 포인터를 사용하여 HP와 MP를 수정한 후 출력하세요.
    character hero = { "전사",100,50 };
    character* ptr = &hero;//구조체 포인트 선언
    printf("\n=== 초기 상태 ===\n");
    printf("이름:%s,Hp: %d,Mp: %d\n\n", ptr->name, ptr->Hp, ptr->Mp);
    ptr->Hp += 50;
    ptr->Mp += 50;
    printf("=== 포션 사용 후 ===\n");
    printf("이름:%s,Hp: %d,Mp: %d\n\n", ptr->name, ptr->Hp, ptr->Mp);

    //### 10. **화살표 연산자 활용**
    //Monster 구조체 배열(3개)을 만들고, 포인터와 화살표 연산자로 순회하며 정보를 출력하세요.
    Monster monsters[3] = {
    { "몬스터 1", "슬라임", 30 }, { "몬스터 2","고블린",50 }, { "몬스터 3","오크",100 }
    };
    Monster* ptr2 = monsters;//첫번째 요소의 주소

    for (int i = 0; i < 3; i++) {
        printf("%s:", (ptr2 + i)->n1);
        printf(" %s ", (ptr2 + i)->n2);
        printf("(Hp: %d)\n", (ptr2 + i)->Hp);
    }

    //### 11. **구조체 포인터 배열**
    //Score 구조체(이름, 점수)를 만들고, 3명의 플레이어를 포인터 배열로 관리하여 출력하세요.
    Score score[3] = { {"Alice",9500},{"Bob",8200},{"Carol",7800} };
    
    Score* ptr3 = score;

    printf("\n=== 점수판 ===\n");
    for (int i = 0; i < 3; ++i) {
        printf("%d위:%s-%d점\n", i+1, (ptr3 + i)->score_name, (ptr3 + i)->score_number);
    }
    printf("\n");

    //### 12. **포인터로 최댓값 찾기**
    //Result 구조체(이름, 점수) 배열에서 포인터를 사용해 최고 점수를 찾아 해당 구조체의 포인터를 반환하는 프로그램을 작성하세요.
    Result result[4] = { {"김철수",85},{"이영희",92},{"박민수",88},{"최지우",95} };
    Result* Ptr4 = result;
    
    for (int i = 0; i < 3; ++i)
    {
        printf("참가자: %s(%d),", (Ptr4 + i)->result_name, (Ptr4 + i)->result_namber);
    }
        printf("%s(%d)\n", (Ptr4 + 3)->result_name, (Ptr4 + 3)->result_namber);
        
        Result* top = findTop(result, 4);
        if (top != NULL) 
        {
            printf("최고 득점자: %s-%d점\n", top->result_name, top->result_namber);
        }

    //13.Vector2D 구조체(x, y)를 만들고, 벡터의 길이를 계산하는 함수를 값 전달 방식으로 구현하세요.
       
        Vector2D vector = { 3.0,4.0 };
        double length = getLength(vector);

        printf("벡터:%.1f,%.1f\n", vector.x, vector.y);
        printf("벡터의 길이:%.2f\n",length);

    //14.Point 구조체(x, y)를 만들고, 두 점의 좌표를 교환하는 swap 함수를 구현하세요.
        Point p1 = { 10,20 };
        Point p2 = { 30,40 };
        printf("교환 전: 점A(%d,%d),점B(%d,%d)\n",p1.x,p1.y,p2.x,p2.y);
        Swap(&p1, &p2);//포인터로 전달
        printf("교환 후: 점A(%d,%d),점B(%d,%d)\n", p1.x, p1.y, p2.x, p2.y);

    //15.Student 구조체 배열(5명)에서 최고 점수 학생을 찾는 함수를 만드세요.
        printf("학생목록:\n");
        Student students[5] = { {"김철수",85},{"이영희",92},{"박민수",78},{"최지우",95},{"정하나",88} };
        Student* top_ = FindTopStudent(students,5);
        for (int i = 0; i < 5; ++i) 
        {
            printf("%s: %d점\n", students[i].student, students[i].score);
                
        }
              
        if (top != NULL) 
        {
            printf("최고 득점자: %s(%d점)\n", top_->student, top_->score);
            
        }

    //17.Vector2D 두 개를 더해서 새로운 Vector2D를 반환하는 함수를 만드세요

        Vector2D v1 = { 5.0, 3.0 };
        Vector2D v2 = { 2.0, 7.0 };
        Vector2D sum = addVector(v1, v2);
        printf("\n벡터1:(%.2f,%.2f)\n",v1.x,v1.y);
        printf("벡터2:(%.2f,%.2f)\n",v2.x,v2.y);
        printf("벡터 합:(%.2f,%.2f)\n",sum.x,sum.y);
    //18.RPGCharacter 구조체(이름, 레벨, HP, MP, 공격력, 방어력)를 만들고, 레벨업 함수를 구현하세요.
        
        RPGCharacter Hero = {
          "용사",    // 이름
          10,       // 레벨
          500, 500, // hp, maxHp
          200, 200, // mp, maxMp
          50,       // 공격력
          30        // 방어력
        };

        printStatus(&Hero);
        levelUp(&Hero);
    //19.Rectangle 구조체에 가로, 세로 길이를 저장하고, 넓이와 둘레를 계산하는 멤버 함수를 추가하세요.
        Rectangle r = { 10.0,5.0 };

        printf("직사각형: 가로:%.f,세로%.f\n", r.width, r.height);
        printf("넓이: %.f\n", getArea(r));
        printf("둘레: %.f\n",getPerimeter(r));

    //20.GameObject 구조체에 이름, HP, 최대HP를 저장하고, 데미지 받기, 회복하기, 상태 출력 멤버 함수를 구현하세요.

        GameObject game = {
            "전사",
            100,
            100,
            30,
            20,
            50
        };
        printf("플레이어 생성: %s (HP: %d/%d)\n",game.player,game.HP, game.maxHp);
        takeDamage(&game,30);
        heal(&game, 20);
        heal(&game, 50);
        return 0;


}

