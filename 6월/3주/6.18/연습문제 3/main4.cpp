//4.### 4. Inventory 클래스

//게임 인벤토리를 관리하는 클래스를 만드세요.
//
//- private: itemCount(처음엔 0, 최대 10개)
//- public: init(), addItem(), removeItem(), getItemCount()
#include <iostream>
#include <string>
using namespace std;

class Inventory
{
	private:
		int itemCount;
	public:
		void init() {
			itemCount = 0;
			cout << "인벤토리 초기화 완료" << endl;
		}
		bool addItem() {
			if (itemCount < 10) {
				itemCount++;
				return true;
			}
			
			else
			{
				cout << "인벤토리가 가득 찼습니다! " << endl;

			}
			return false;
		}
		void removeItem() {
			if (itemCount > 0) {
				itemCount--;
			
			}
			else {
				cout << "인벤토리에 아이템이 없습니다!" << endl;
			}
		}
		int getItemCount() {
			return itemCount;
		}
};
		

int main()
{
	Inventory bag;
	bag.init();


	for (int i = 0; i < 3; i++)
	{
	bag.addItem();   // 3
	}
	cout << "아이템 3개 추가" << endl;
	cout << "현재 아이템 개수: " << bag.getItemCount() << endl;

	// 아이템 1개 제거
	bag.removeItem();
	cout << "아이템 1개 제거" << endl;
	cout << "현재 아이템 개수: " << bag.getItemCount() << endl;//2

	cout << "아이템 10개 추가 시도" << endl;
	// 아이템 10개 추가 시도
	for (int i = 0; i < 10; ++i) {
		bag.addItem();
	}

	cout << "현재 아이템 개수: " << bag.getItemCount() << endl;

	return 0;
}
