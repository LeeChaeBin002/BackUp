#include <iostream>
#include <iomanip> 
#include "Student.h"
#include "Item.h"
using namespace std;

//1.### 문제 1. 성적 관리 시스템

//학생들의 시험 점수를 동적으로 관리하는 프로그램을 작성하세요.
//
//- 학생 수를 입력받아 동적 배열 생성
//- 각 학생의 점수 입력
//- 평균 점수 계산 및 출력
//- 메모리 해제

int main() {
    //int studentCount;

    //cout << "학생 수를 입력하세요: ";
    //cin >> studentCount;

    //// 1. 동적 배열 생성
    //int* scores = new int[studentCount];

    //// 2. 점수 입력
    //for (int i = 0; i < studentCount; ++i) 
    //{
    //    cout << i + 1 << "번 학생 점수: ";
    //    cin >> scores[i];
    //}

    //// 3. 평균 계산
    //int sum = 0;
    //for (int i = 0; i < studentCount; ++i) 
    //{
    //    sum += scores[i];
    //}
    //double average = static_cast<double>(sum) / studentCount;

    //// 4. 평균 출력
    //cout << fixed << setprecision(2);
    //cout << "평균 점수: " << average << endl;

    //// 5. 메모리 해제
    //delete[] scores;
    //cout << "메모리 해제 완료" << endl;

    //return 0;
    // 
    //2.### 문제 2. 몬스터 배열 관리

    //게임에서 여러 몬스터의 HP를 관리하는 프로그램을 작성하세요.

    //    - 몬스터 수를 입력받아 HP 배열 동적 할당
    //    - 각 몬스터의 초기 HP는 100
    //    - 모든 몬스터에게 20의 데미지 적용
    //    - 생존한 몬스터 수 출력
    // 
    //int MonseterCount;
    //// 1. 몬스터 수 입력
    //cout << "몬스터 수 입력: ";
    //cin >> MonseterCount;

    //// 2. 동적 배열 생성 및 초기화 (HP 100)
    //int* Hp = new int[MonseterCount];
    //for (int i = 0; i < MonseterCount; ++i) {
    //    Hp[i] = 100;
    //}
    //// 3. 초기 HP 출력
    //    cout << "초기 HP: ";
    //for (int i = 0; i < MonseterCount; ++i)
    //{
    //    cout<< Hp[i]<<" ";
    //}
    //cout << endl;

    //// 4. 20 데미지 적용

    //for (int i = 0; i < MonseterCount; ++i)
    //{
    //    Hp[i] -= 20;
    //}

    //// 5. 데미지 후 HP 출력
    //cout << "데미지 20 적용 후: ";
    //for (int i = 0; i < MonseterCount; ++i) {
    //    cout << Hp[i] << " ";
    //}
    //cout << endl;

    //// 6. 생존 몬스터 수 계산 (HP > 0)
    //int aliveCount = 0;
    //for (int i = 0; i < MonseterCount; ++i) {
    //    if (Hp[i] > 0)
    //        ++aliveCount;
    //}
    //cout << "생존 몬스터: " << aliveCount << "마리" << endl;

    //// 7. 메모리 해제
    //delete[] Hp;

    //3.### 문제 3. 학생 명부

    /*Student 클래스를 만들고 동적으로 학생 객체를 생성 / 관리하세요.

        - 이름과 학번을 가진 Student 클래스
        - 생성자와 소멸자에서 메시지 출력
        - 동적으로 3명의 학생 생성 후 정보 출력*/
        // 동적 생성
    Student* s1 = new Student(2024001, "김철수", 1);
    Student* s2 = new Student(2024002, "이영희", 2);
    Student* s3 = new Student(2024003, "박민수", 3);

    // 정보 출력
    s1->printInfo();
    s2->printInfo();
    s3->printInfo();

    // 메모리 해제
    delete s1;
    delete s2;
    delete s3;

   /* ### 문제 4. 아이템 인벤토리

        게임 아이템을 관리하는 간단한 인벤토리를 구현하세요.

        - Item 클래스(이름, 가격)
        - 인벤토리 크기를 입력받아 Item 포인터 배열 생성
        - 아이템 추가 / 제거 기능
        - 총 가치 계산*/
    
   

    // Ensure the `std` namespace is explicitly used for `cout`  
    cout << "행 수: ";
    //### 문제 5. 영화관 좌석 배치

    /*2차원 동적 배열로 영화관 좌석을 표현하세요.

        - 행과 열 수를 입력받아 2차원 배열 생성
        - 빈 좌석은 0, 예약된 좌석은 1
        - 특정 좌석 예약 기능
        - 좌석 배치도 출력*/

    int rows, cols;
    cout << "행 수: ";
    cin >> rows;
    cout << "열 수: ";
    cin >> cols;

    // 2차원 동적 배열 생성
    int** seats = new int* [rows];
    for (int i = 0; i < rows; ++i) {//행
        seats[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {//열
            seats[i][j] = 0; // 초기화: 빈 좌석
        }
    }

    // 좌석 예약
    seats[0][2] = 1; // (1,2)
    seats[1][3] = 1; // (2,3)

    cout << "좌석 (1,2) 예약\n";
    cout << "좌석 (2,3) 예약\n";

    // 좌석 배치도 출력
    cout << "[좌석 배치도]\n";
    int reservedCount = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << seats[i][j] << " ";
            if (seats[i][j] == 1) reservedCount++;
        }
        cout << endl;
    }

    cout << "예약된 좌석: " << reservedCount << "개\n";

    // 메모리 해제
    for (int i = 0; i < rows; ++i) {
        delete[] seats[i];
    }
    delete[] seats;

    return 0;

}








