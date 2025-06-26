#pragma once
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;
class BankAccount
{
private:
	int balance;//���� �ܾ�

public:
	BankAccount() :balance(0) {}

	void deposit(int amount) //���
	{
		if (amount <= 0)
			throw string("�ݾ��� ������� �մϴ�!");
		balance += amount;
		cout << "�Ա�:" << amount << "��,�ܾ�:" << balance << "��" << endl;
	}

	void withdraw(int amount)//�Ա�
	{
		if (amount <= 0)
			throw string("�ݾ��� ������� �մϴ�!");
		if (amount > balance)
			throw string("�ܾ��� �����մϴ�!(�ʿ�:") + to_string(amount) + "��,����:" + to_string(balance) + "��)";
		balance -= amount;
		cout << "���:" << amount << "��,�ܾ�:" << balance << "��" << endl;
	}

	int getBalance() const
	{
	

		return balance;
	}
	
};


