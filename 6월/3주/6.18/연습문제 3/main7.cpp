//### 7. Position 클래스 (메서드 체이닝)

//좌표를 관리하는 클래스에서 메서드 체이닝을 구현하세요.
//
//- private: x, y(처음엔 0, 0)
//- public: init() - 0, 0으로 초기화, moveX(int x), moveY(int y) 메서드가* this를 반환
//	- 연속 호출 : pos.moveX(10).moveY(20).moveX(5)
#include <iostream>
using namespace std;


class Position {
private:
    int x;
    int y;

public:
    void init() {
        x = 0;
        y = 0;
    }

    Position& moveX(int dx) {
        this->x += dx;
        return *this;
    }

    Position& moveY(int dy) {
        this->y += dy;
        return *this;
    }

    void show() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Position pos;
    pos.init();
    cout << "초기위치: ";
    pos.show();

    pos.moveX(10).moveY(20).moveX(5);

    cout << "이동 후 위치: ";
    pos.show();

    return 0;
}