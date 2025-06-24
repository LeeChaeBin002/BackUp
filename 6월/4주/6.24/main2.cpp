#include "Infantry.h"
#include "Unit.h"
#include <iostream>  
#include "Tank.h"
#include "Vehicle.h"
#include "Shape.h"
#include <vector>
#include "Circle.h"
#include "Rectangle.h"
#include "Enemy.h"
#include "Zombie.h"
using namespace std;


int main() {
    Infantry infantry(0, 0);
    Vehicle vehicle(0, 0);

    infantry.Move(5, 3);  // 보병이 걸어서 이동
    vehicle.Move(10, 6);  // 차량이 달려서 이동

    Shape* shapes[2]{};
    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(10, 20);

    std::cout << "도형 그리기:\n";
    for (int i = 0; i < 2; ++i) {
        shapes[i]->Draw();  // 가상 함수라서 올바른 파생 클래스 함수 호출
    }

    for (int i = 0; i < 2; ++i) {
        delete shapes[i];
    }
    Enemy* enemy = new Zombie("좀비1", 10);

    std::cout << "Enemy 포인터로 삭제 시도...\n";
    delete enemy;  // Zombie 소멸자 호출 안 됨, 경고 메시지 출력됨

  
    return 0;
}
