#include "Skill.h"
#include "FireBall.h"
#include "Heal.h"
#include "Shield.h"

int main() {
    Skill* skills[3]{};
    skills[0] = new FireBall();
    skills[1] = new Heal();
    skills[2] = new Shield();

    cout << "사용 가능한 스킬:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << ". " << skills[i]->GetName()
            << " (마나: " << skills[i]->GetManaCost()
            << ", 쿨다운: " << skills[i]->GetCooldown() << "초)" << endl;
    }

    cout << endl;
    skills[0]->Use(); // 파이어볼 사용

    // 메모리 해제
    for (int i = 0; i < 3; ++i) {
        delete skills[i];
    }

    return 0;
}
