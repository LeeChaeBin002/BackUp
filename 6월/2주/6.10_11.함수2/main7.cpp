//7.### **문제 7: 배열 복사**

//C언어를 사용하여 원본 배열(`source`)의 모든 요소를 대상 배열(`target`)로 복사하는 함수 `copyArray`를 작성하세요.



#include <stdio.h>

void copyArray(int* source, int* target, int size) {
    for (int i = 0; i < size; ++i) {
        *(target + i) = *(source + i);//target[i]=source[i];
    }
}

int main() {
    int source[] = { 10, 20, 30, 40, 50 };
    int target[5];
    int size = sizeof(source) / sizeof(source[0]);

    copyArray(source, target, size); 
    printf("source에서 taget으로 복사된 배열: ");
    for(int i =0;i<size;++i)
    {
        printf("%d ", target[i]);
 
    }
    printf("\n");


    return 0;
}