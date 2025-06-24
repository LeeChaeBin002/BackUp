#pragma once

template <typename T>//싱글톤화 하고싶은걸 T인자를 넘겨줌
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
		static T instance;//static 지역변수 리소스 매니저 생성
		return instance;

	}

};
