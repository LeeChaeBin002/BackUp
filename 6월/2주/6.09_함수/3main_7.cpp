#include <stdio.h>  

//7.아이템 가격 계산 함수: 아이템 개수와 단가를 매개변수로 받아 총 가격을 계산하는 함수 calculateItemPrice(int quantity, int unitPrice)를 작성하세요.
int calculateItemPrice(int quantity, int unitPrice) {

    return quantity*unitPrice;
}

int main() {
    int item;
    int unit_price;

    printf("아이템 개수:");
    scanf("%d", &item);
    printf("단가:");
    scanf("%d", &unit_price);
 
    printf("총 가격: %d원\n",calculateItemPrice(item,unit_price));

}