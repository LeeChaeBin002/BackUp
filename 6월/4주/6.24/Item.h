#pragma once  
#include <string>  
#include <iostream>  
#include "Equipment.h"  
#include "Item.h" 

using namespace std;  

class Item  
{  
protected:  
    std::string name;  
    int price;  
public:  
    Item(const std::string& name, int price);  
    virtual ~Item() = default;  

    virtual void PrintInfo() const;
};
   


    
