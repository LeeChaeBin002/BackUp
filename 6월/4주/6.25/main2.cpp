
#include <iostream>
#include <stdexcept> // for std::runtime_error
#include "player.h"
#include "BankAccount.h"
using namespace std;


//9. 나눗셈 템플릿 함수
template <typename T9>
T9 divide(T9 a, T9 b) {
	if (b == 0)
		throw ("0으로 나눌 수 없습니다!");
	return a / b;
}




int main() {
	//while (true) {
	//    double x, y;
	//    cout << "두 수를 입력하세요 (예: 10 3): ";
	//    cin >> x >> y;

	//    try {
	//        double result = divide(x, y);
	//        cout << x << " / " << y << " = " << result << endl;
	//    }
	//    catch (const exception& e) {
	//        cout << "에러: " << e.what() << endl;
	//    }

	//    char cont;
	//    cout << "계산을 계속하시겠습니까? (y/n): ";
	//    cin >> cont;

	//    if (cont != 'y' && cont != 'Y')
	//        break;
	//}

	////10.
	//player p;

	//try {
	//    p.gainExp(100);  // 레벨업: 1 → 2
	//    p.gainExp(100);  // 레벨업: 2 → 3
	//    p.gainExp(9600); // 레벨업 반복 → 예외 발생 (MAX_LEVEL)
	//}
	//catch (const exception& e) {
	//    cout << "에러: " << e.what() << endl;
	//}
	//try {
	//    p.gainExp(-100);  // 음수 경험치 → 예외
	//}
	//catch (const exception& e) {
	//    cout << "에러: " << e.what() << endl;
	//}

	//11.
	BankAccount account;
	try
	{
		account.deposit(10000);
		account.withdraw(3000);
		account.withdraw(8000);//부족 예외
	}
	catch (const std::string& e)
	{
		cout << "에러: " << e << endl;
	}
	try {

		account.deposit(-1000);
	}
	catch (const string& e) {
		cout << "에러: " << e << endl;
	}

	BankAccount myAcc;
	cout << "현재 잔액은 " << myAcc.getBalance() << "원입니다." << endl;

	return 0;

}
