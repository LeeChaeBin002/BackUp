#pragma once  
#include <iostream>  
#include "EnhancedWeapon.h"

class SuperWeapon : public EnhancedWeapon
{  
public:  
    SuperWeapon() {  
        std::cout << "SuperWeapon 持失切" << std::endl;  
    }  

    ~SuperWeapon() {  
        std::cout << "SuperWeapon 社瑚切" << std::endl;  
    }  
};
