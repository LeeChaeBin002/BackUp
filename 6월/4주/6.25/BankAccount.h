#pragma once
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;
class BankAccount
{
private:
	int balance;//현재 잔액

public:
	BankAccount() :balance(0) {}

	void deposit(int amount) //출금
	{
		if (amount <= 0)
			throw string("금액은 양수여야 합니다!");
		balance += amount;
		cout << "입금:" << amount << "원,잔액:" << balance << "원" << endl;
	}

	void withdraw(int amount)//입금
	{
		if (amount <= 0)
			throw string("금액은 양수여야 합니다!");
		if (amount > balance)
			throw string("잔액이 부족합니다!(필요:") + to_string(amount) + "원,현재:" + to_string(balance) + "원)";
		balance -= amount;
		cout << "출금:" << amount << "원,잔액:" << balance << "원" << endl;
	}

	int getBalance() const
	{
	

		return balance;
	}
	
};


