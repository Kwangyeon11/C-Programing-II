/*   파일명: ch10_11.c
	 내  용: PA11. PRODUCT 구조체 배열을 이용해서 제품명을 입력받아 검색 후 주문 처리하는 프로그램을 작성하시오.(난이도 3)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct product {
    char name[24];
    int price;
    int stock;
} PRODUCT;

void cal_product(PRODUCT* items, PRODUCT* order, int order_qty)
{
    for (int i = 0; items[i].name[0] != '\0'; i++)
    {
        if (strcmp(items[i].name, order->name) == 0)
        {
            if (items[i].stock >= order_qty)
            {
                order->price = items[i].price * order_qty;
                items[i].stock -= order_qty; // items는 재고만 변경되고 나머지 고정값
                order->stock = items[i].stock;
                return;
            }
            else
            {
                printf("재고가 부족합니다. 현재 재고: %d\n", items[i].stock);
                order->price = 0;
                order->stock = items[i].stock;
                return;
            }
        }
    }

}

void print_product()
{
    PRODUCT item[5] = {
        {"아메리카노", 4000, 10},
        {"카페라떼", 4500, 10},
        {"플랫화이트", 5000, 10}
    };
    PRODUCT order_item = { 0 };

    for (int i = 0; i < 5; i++)
    {
        printf("주문할 제품명? ");
        getchar(); 
        gets_s(order_item.name, sizeof(order_item.name));

        if (strcmp(order_item.name, ".") == 0)
        {
            for (int i = 0; item[i].name[0] != '\0'; i++)
            {
                printf("[%s %d원 재고:%d]\n", item[i].name, item[i].price, item[i].stock);
            }
            break;
        }

        printf("주문할 수량? ");
        scanf("%d", &order_item.stock);

        if (order_item.stock == 0)
        {
            break;
        }

        cal_product(item, &order_item, order_item.stock);

        if (order_item.price > 0)
        {
            printf("결제 금액: %d  %s 재고: %d\n", order_item.price, order_item.name, order_item.stock);
        }
		order_item.name[0] = '\0'; // order_item이 영수증 역할을 하므로, 다음 주문을 위해 초기화
        order_item.price = 0;
		order_item.stock = 0; 
    }

}

int main()
{
    print_product();
    return 0;

}
