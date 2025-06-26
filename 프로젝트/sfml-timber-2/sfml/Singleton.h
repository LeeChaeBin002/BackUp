#pragma once

template <typename T>//�̱���ȭ �ϰ������ T���ڸ� �Ѱ���
class Singleton
{
protected:
	Singleton() = default;
	virtual ~Singleton() = default;

	Singleton(const Singleton&)=delete;
	Singleton& operator=(const Singleton&) = delete;

public:

	static T& Instance()
	{
		static T instance;//static �������� ���ҽ� �Ŵ��� ����
		return instance;

	}

};
