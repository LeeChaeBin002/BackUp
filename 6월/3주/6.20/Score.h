#ifndef SCORE_H  
#define SCORE_H  

class Score {  
private:  
    int score;  

public:  
    Score(int initial);  
    int Getscore() const;  
    char GetRank() const; 
    void addScore(int amount);  
    void print() const;  
};  

#endif  