#ifndef PAIR_H  
#define PAIR_H  

template <typename T4, typename T4_>  
class Pair {  
private:  
    T4 first;  
    T4_ second;  

public:  
    Pair(const T4& firstVal, const T4_& secondVal) 
        : first(firstVal), second(secondVal) {}  

    T4 getFirst() const { return first; }  
    T4_ getSecond() const { return second; }  
};  

#endif
