#include <iostream>  
#include "Character.h"  
#include "Warrior.h"
#include "Wizard.h"
#include "SuperWeapon.h"
#include "Weapon.h"
#include "EnhancedWeapon.h"
#include "Armor.h"
#include "Item.h"
#include "Unit.h"
#include "Infantry.h"
#include "Vehicle.h"
using namespace std;

int main() {
    Warrior w("¾Æ¼­", 100, 50);
    w.Attack();
    Wizard m("¸Ö¸°", 70, 120);
    m.Attack();

    cout << "== ½´ÆÛ¹«±â »ý¼º ==" << endl;
   
    SuperWeapon* sw = new SuperWeapon();

    cout << "== ½´ÆÛ¹«±â ¼Ò¸ê ==" << endl;
 
    delete sw;

    Armor armor("°­Ã¶ °©¿Ê", 1500, 80, 35);
    armor.PrintInfo();

    Infantry soldier(0, 0);
    Vehicle tank(10, 10);


 
    return 0;
}