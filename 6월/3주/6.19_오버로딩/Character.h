#pragma once


class Character
{
  
    private:
        static int max_hp;
        int hp;
        int mp;

    public:
        Character();
        void attack();
        void useSkill();
        int getHp() const;
   

};

