

//.5### **문제 5: 배열 요소 뒤집기**

//포인터를 이용하여 배열의 요소를 뒤집는 함수 `reverseArray`를 작성하세요.

#include <stdio.h>
void reverseArray(int* arr, int size) {  
    int start = 0;              // 배열의 시작 주소  
    int end = size - 1;     // 배열의 마지막 주소  

    while (start < end) {  
        int temp = start;  
        start = end;  
        end = temp;  

        start++;  
        end--;  
    }  
}


int main()

{

	int numbers[] = { 1, 3, 2, 3, 5 };
	int size = sizeof(numbers) / sizeof(numbers[0]);
	reverseArray(numbers, size);

	printf("뒤집힌 배열: ");
	for (int i = 0; i < size; ++i) {
		printf("%d ", numbers[i]);
	}
	printf("\n");

	return 0;

}