// 25. 07. 28

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct date {
	
	int year;
	int month;
	int day;

} DATE;

void print_date()
{

	DATE days;

	printf("¿¬? ");
	scanf("%d", &days.year);
	printf("¿ù? ");
	scanf("%d", &days.month);
	printf("ÀÏ? ");
	scanf("%d", &days.day);

	printf("%d/%d/%d\n", days.year, days.month, days.day);

}

int main()
{
	print_date();
	return 0;
}