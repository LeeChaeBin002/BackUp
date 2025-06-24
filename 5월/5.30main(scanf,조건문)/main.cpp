//1. 기본 scanf 사용: 사용자로부터 두 개의 정수를 입력받아 덧셈, 뺄셈, 곱셈, 나눗셈 결과를 출력하는 프로그램을 작성하세요. 나눗셈은 실수 결과로 출력하세요.
int a, b;
scanf("%d%d", &a, &b);
printf("두 정수를 입력하세요%d,%d\n", a, b);
printf("%d+%d=%d\n", a, b, a + b);
printf("%d-%d=%d\n", a, b, a - b);
printf("%d*%d=%d\n", a, b, a* b);
printf("%d/%d=%.2f\n", a, b, (float)a / b);

//2. 다양한 자료형 입력받기: 사용자로부터 정수, 실수, 문자를 각각 입력받아 저장하고 출력하는 프로그램을 작성하세요. 실수는 소수점 둘5째 자리까지 출력하세요.
int j;
float s;
char A;

scanf("%d%f %c", &j, &s, &A);
printf("\n정수를 입력하세요:%d\n", j);
printf("실수를 입력하세요:%.5f\n", s);
printf("문자를 입력하세요:%c\n", A);
printf("입력받은 정수:%d\n", j);
printf("입력받은 실수:%.5f\n", s);
printf("입력받은 문자:%d\n", A);
printf("입력받은 문자의 ASCII코드:%c\n", A);

//3 학생 성적 입력 및 처리: 학생의 이름(문자열), 국어, 영어, 수학 점수를 입력받아 총점과 평균을 계산하여 출력하는 프로그램을 작성하세요. 평균은 소수점 둘째 자리까지 출력하세요.
int a, b, c;
char name[100];

scanf("%s%d%d%d", name, &a, &b, &c);

printf("학생이름을 입력하세요:%s\n", name);
printf("국어 점수를 입력하세요:%d\n", a);
printf("영어 점수를 입력하세요:%d\n", b);
printf("수학 점수를 입력하세요:%d\n", c);
printf("==성적표==\n");
printf("이름:%s\n", name);
printf("국어:%d점\n", a);
printf("영어:%d점\n", b);
printf("수학:%d점\n", c);
printf("총점:%d점\n", a + b + c);
printf("평균:%.2f점\n", (a + b + c) / 3.0);

//4. 상품 정보 입력 및 계산 : 상품명, 단가, 수량을 입력받아 총 금액을 계산하고, 10 % 할인된 금액도 함께 출력하는 프로그램을 작성하세요.

char name[100];
int a;
int b;
scanf("%s%d%d", name, &a, &b);
printf("상품명을 입력하세요:%s\n", name);

printf("단가를 입력하세요:%d원\n", a);
printf("수량을 입력하세요:%d\n", b);
printf("==구매 내역==\n");
printf("단가:%d원\n", a);
printf("수량:%d개\n", b);
int discounted_price = (a + a) * 0.9f;
printf("총 금액:%d원\n", a + a);
printf("할인 금액(10%):%d원\n", (a + a) * 10 / 100);
printf("최종 금액:%d원\n", discounted_price);

//5개인 정보 종합 입력 : 사용자의 나이, 키(실수), 몸무게(실수), 성별(문자), 이름을 입력받아 BMI를 계산하고 개인 정보를 요약하여 출력하는 프로그램을 작성하세요.BMI = 몸무게(kg) / (키(m) * 키(m))
char  name[10];
int age;
float key, bmi, wight;
char gender;


scanf("%d%f%f %c%s", &age, &key, &wight, &gender, name);
printf("나이를 입력하세요:%d\n", age);
printf("키를 입력하세요:%.1f\n", key);
printf("몸무게를 입력하세요:%.1f\n", wight);
printf("성별을 입력하세요:%c\n", gender);
printf("이름을 입력하세요:%s\n", name);
float height_m = key / 100.0f;
bmi = wight / (height_m * height_m);
printf("BMI:%.2f\n", bmi);
printf("==개인정보 요약==\n");
printf("이름:%s\n", name);
printf("성별:%c\n", gender);
printf("키:%.2f\n", key);
printf("몸무게:%.2f\n", wight);
