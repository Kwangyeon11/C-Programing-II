// 25. 07. 29

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