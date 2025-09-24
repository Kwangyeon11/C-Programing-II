/*   파일명: ch10_04.c
	 내  용: PA04. DATA 구조체와 print_date 함수를 이용해서 입력받은 날짜를 출력하는 프로그램을 작성하시오.(난이도 1)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

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
