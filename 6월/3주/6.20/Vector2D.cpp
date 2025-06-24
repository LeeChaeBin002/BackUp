#include "Vector2D.h"

Vector2D::Vector2D(int x, int y)
	:x(x),y(y)
{

}

Vector2D Vector2D::operator+(const Vector2D& other) const
{
	return Vector2D(x + other.x,y + other.y);
}

Vector2D Vector2D::operator-(const Vector2D& other) const
{
	return Vector2D(x - other.x, y - other.y);
}

bool Vector2D::operator==(const Vector2D& other) const
{
	return x == other.x && y == other.y;
}

std::ostream& operator<<(std::ostream& os, const Vector2D& vec)
{
	os << "(" << vec.x << ", " << vec.y << ")";
	return os;
}
