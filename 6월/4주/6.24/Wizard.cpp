#include "Wizard.h"

Wizard::Wizard(std::string name, int hp,int mana)
	:Character(name,hp),mana(mana)
{ 
	cout <<"마법사 생성: "<< name << "(Hp: " << hp << ", 마나: " << mana << ")" << endl;

}


void Wizard::Attack() 
{
	
	cout << name << "이 마법으로 공격합니다!" << endl;
}
