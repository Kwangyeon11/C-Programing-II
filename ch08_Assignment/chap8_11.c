// 25. 07. 17

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_rect_info(int x, int y)
{
	 int len = 2 * (x + y);
	 int area = x * y;

	 printf("넓이: %d, 둘레: %d\n", area, len);
}

void print_rect()
{
	int x, y;

	printf("가로? ");
	scanf("%d", &x);
	printf("세로? ");
	scanf("%d", &y);

	get_rect_info(x, y);
}

int main()
{
	print_rect();
	return 0;
}