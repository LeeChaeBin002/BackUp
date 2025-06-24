
#include <iostream>
#include <string>
using namespace std;

int main() {

	//1.## 문제 1. 게임 캐릭터 정보 출력

	//게임 캐릭터의 정보를 입력받아 보기 좋게 출력하는 프로그램을 작성하세요.
	//- 플레이어 이름(string), 레벨(int), HP(int), MP(int)를 입력받습니다
	//- cout을 사용하여 캐릭터 정보를 깔끔하게 출력합니다.
	//string name;
	//int level;
	//int hp;
	//int mp;

	////입력 받기
	//

	//getline(cin, name);//한줄 전체를 입력받는 함수 
	//cin >> level;
	//cin >> hp;
	//cin >> mp;

	//// 출력

	//cout << "=== 캐릭터 정보 ===" << endl;
	//cout << "이름 :" << name << endl;
	//cout << "레벨 :" << level << endl;
	//cout << "HP :" << hp << endl;
	//cout << "MP :" << mp << endl;
	//cout << "===================" << endl;


	//2.## 문제 2. 아이디 유효성 검사

	/*게임 아이디를 입력받아 유효성을 검사하는 프로그램을 작성하세요.

		- 아이디는 4자 이상 12자 이하여야 합니다
		- 첫 글자는 영문자여야 합니다(알파벳 검사)
		- string의 length()와 인덱스 접근을 활용하세요*/

	/**/string  id;
	cout << "아이디: ";
	cin >> id;

	int length = id.length();
	char firstChar = id[0];

	//출력
	cout << "길이: " << length << "자" << endl;
	cout << "첫 글자: " << firstChar << endl;

	bool isValid = true;

	if (length < 4 || length>12) 
	{
		cout << "아이디는 4자 이상 12자 이하여야 합니다" << endl;
		isValid = false;
	}
    if (!((firstChar >= 'A' && firstChar <= 'Z') || (firstChar >= 'a' && firstChar <= 'z')))  
    {  
    cout << "사용할 수 없는 아이디 입니다!(첫 글자는 영문자여야 합니다)" << endl;  
    isValid = false;  
    }
	if (isValid)
	{
	cout << "사용 가능한 아이디입니다! " << endl;
	}
	//3.
	//## 문제 3. 닉네임 변환기

	//	입력받은 닉네임을 스타일리시하게 변환하는 프로그램을 작성하세요.

	//	- 닉네임 앞뒤에 "★"를 붙입니다
	//	- 닉네임을 대문자로 변환한 버전도 출력합니다
	//	- string의 + 연산자와 문자 변환을 활용하세요

	string nickname;
	cout << "닉네임을 입력하세요:";
	cin >> nickname;
	int length2 = nickname.length();
	string stylish = "★" + nickname + "★";
	
	//대문자 버전
	string upperNickname = nickname;
	for (int i = 0; i < upperNickname.length(); ++i)
	{
		if (upperNickname[i] >= 'a' && upperNickname[i] <= 'z')
		{
			upperNickname[i] = upperNickname[i] - 'a' + 'A';
		}
	}
	cout << "원본 닉네임: " << nickname << endl;
	cout << "꾸민 닉네임: " << stylish << endl;
	cout << "대문자 닉네임: " << upperNickname << endl;
	cout << "길이: " << length2 <<"자"<< endl;


	return 0;



}