#pragma once
#include <iostream>

class Vector2
{
private:
	float x;
	float y;

public:
	Vector2();
	Vector2(float x, float y);

	void Set(float x, float y);

	void print();

	// 	Vector2 vec6 = vec1.Multiply(10.f);
	Vector2 Multiply(float a);

	Vector2 Add(Vector2 rhs);
	Vector2 Substract(Vector2 rhs);

	static Vector2 Add(const Vector2& lhs, const Vector2& rhs);
	static Vector2 Substract(Vector2 lsh, Vector2 rhs);


	Vector2 operator+(const Vector2& rhs);
	friend Vector2 operator*(float lhs, const Vector2& rhs);
	friend std::ostream& operator<<(std::ostream& lhs, const Vector2& rhs);
};


Vector2 operator*(float lhs, const Vector2& rhs);

std::ostream& operator<<(std::ostream& lhs, const Vector2& rhs);