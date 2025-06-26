#pragma once
template <typename C>
class Container_
{
private:
	C int items[10];
	int count;

public:
	Container() : count(0) {}

	void add(const C& item)
	{
		if (count < 10)
		{
			items[count++] = item;
		}
		else
		{
			cout << "�������� ���� á���ϴ�!" << endl;
		}
	}

	void remove()
	{
		if (count > 0)
		{
			--count;
		}
	}
	void display(const string& label )
};

