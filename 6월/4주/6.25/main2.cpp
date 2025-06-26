
#include <iostream>
#include <stdexcept> // for std::runtime_error
#include "player.h"
#include "BankAccount.h"
using namespace std;


//9. ������ ���ø� �Լ�
template <typename T9>
T9 divide(T9 a, T9 b) {
	if (b == 0)
		throw ("0���� ���� �� �����ϴ�!");
	return a / b;
}




int main() {
	//while (true) {
	//    double x, y;
	//    cout << "�� ���� �Է��ϼ��� (��: 10 3): ";
	//    cin >> x >> y;

	//    try {
	//        double result = divide(x, y);
	//        cout << x << " / " << y << " = " << result << endl;
	//    }
	//    catch (const exception& e) {
	//        cout << "����: " << e.what() << endl;
	//    }

	//    char cont;
	//    cout << "����� ����Ͻðڽ��ϱ�? (y/n): ";
	//    cin >> cont;

	//    if (cont != 'y' && cont != 'Y')
	//        break;
	//}

	////10.
	//player p;

	//try {
	//    p.gainExp(100);  // ������: 1 �� 2
	//    p.gainExp(100);  // ������: 2 �� 3
	//    p.gainExp(9600); // ������ �ݺ� �� ���� �߻� (MAX_LEVEL)
	//}
	//catch (const exception& e) {
	//    cout << "����: " << e.what() << endl;
	//}
	//try {
	//    p.gainExp(-100);  // ���� ����ġ �� ����
	//}
	//catch (const exception& e) {
	//    cout << "����: " << e.what() << endl;
	//}

	//11.
	BankAccount account;
	try
	{
		account.deposit(10000);
		account.withdraw(3000);
		account.withdraw(8000);//���� ����
	}
	catch (const std::string& e)
	{
		cout << "����: " << e << endl;
	}
	try {

		account.deposit(-1000);
	}
	catch (const string& e) {
		cout << "����: " << e << endl;
	}

	BankAccount myAcc;
	cout << "���� �ܾ��� " << myAcc.getBalance() << "���Դϴ�." << endl;

	return 0;

}
