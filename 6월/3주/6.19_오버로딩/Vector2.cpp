#include "Vector2.h"
#include <iostream>

Vector2::Vector2()
	: x(0.f), y(0.f)
{
}

Vector2::Vector2(float x, float y)
	: x(x), y(y)
{
}

void Vector2::Set(float x, float y)
{
	this->x = x;
	this->y = y;
}

void Vector2::print()
{
	std::cout << "(" << x << ", " << y << ")" << std::endl;
}

Vector2 Vector2::Multiply(float a)
{
	Vector2 ret;
	ret.x = x * a;
	ret.y = y * a;
	return ret;
}

Vector2 Vector2::Add(Vector2 rhs)
{
	return Vector2(x + rhs.x, y + rhs.y);
}

Vector2 Vector2::Substract(Vector2 rhs)
{
	Vector2 ret;
	ret.x = x - rhs.x;
	ret.y = y - rhs.y;
	return ret;
}

Vector2 Vector2::Add(const Vector2& lhs, const Vector2& rhs)
{
	Vector2 ret;
	ret.x = lhs.x + rhs.x;
	ret.y = lhs.y + rhs.y;
	return ret;
}

Vector2 Vector2::Substract(Vector2 lhs, Vector2 rhs)
{
	return Vector2(lhs.x - rhs.x, lhs.y - rhs.y);
}

Vector2 Vector2::operator+(const Vector2& rhs)
{
	return Vector2(x + rhs.x, y + rhs.y);
}

Vector2 operator*(float lhs, const Vector2& rhs)
{
	return Vector2(lhs * rhs.x, lhs * rhs.y);
}

std::ostream& operator<<(std::ostream& lhs, const Vector2& rhs)
{
	lhs << "(" << rhs.x << ", " << rhs.y << ")";
	return lhs;
}