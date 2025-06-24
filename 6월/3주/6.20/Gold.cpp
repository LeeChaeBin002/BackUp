#include "Gold.h"

Gold::Gold(int amount)
	:amount(amount)
{
}

Gold Gold::operator+(const Gold& other) const
{
	return Gold(amount+other.amount);
}

Gold Gold::operator-(const Gold& other) const
{
	return Gold(amount - other.amount);
}

Gold& Gold::operator+=(int value)
{
	amount += value;
	return *this;
}

bool Gold::operator>(const Gold& other) const
{
	return amount > other.amount;
}

bool Gold::operator<(const Gold& other) const
{
	return amount < other.amount;
}

std::ostream& operator<<(std::ostream& os, const Gold& gold)
{
	os << gold.amount << "°ñµå";
	return os;
}
