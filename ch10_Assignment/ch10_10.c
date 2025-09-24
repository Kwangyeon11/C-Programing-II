/*   파일명: ch10_10.c
	 내  용: PA10. PRODUCT 구조체를 이용해서 최대 5개의 제품 정보를 입력받아 저장하고 출력하는 프로그램을 작성하시오.(난이도 1)
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


void print_product()
{
	PRODUCT item[5] = { 0 };
	
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("제품명? ");
		gets_s(item[i].name, sizeof(item[i].name));
		
		if (strcmp(item[i].name, ".") == 0)
		{
			item[i].name[0] = '\0';
			break;
		}
		printf("가격? 재고? ");
		scanf("%d %d", &item[i].price, &item[i].stock);
		getchar(); // 버퍼 비우기

	}
	for (i = 0; item[i].name[0] != '\0'; i++)
	{
		printf("[%s %d원 재고:%d]\n", item[i].name, item[i].price, item[i].stock);
	}

}

int main()
{
	print_product();
	return 0;

}
