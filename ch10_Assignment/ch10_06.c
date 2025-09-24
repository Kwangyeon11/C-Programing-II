/*   파일명: ch10_06.c
	 내  용: PA06. DATE 구조체 배열을 선언해서 공휴일에 해당하는 날짜로 초기화한 다음 입력받은 날짜가 공휴일인지 검사하는 프로그램을 작성하시오.(난이도 3)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

typedef struct date {

	int year;
	int month;
	int day;

} DATE;

int is_same_date(DATE *p1, DATE *p2)
{
	if (p1->month == p2->month && p1->day == p2->day) {
		return 1;
	} else {
		return 0;
	}
}

void print_date()
{
	DATE days1 = { 0 };
	DATE* p1 = &days1;

	DATE days2 = { NULL, 1, 1 }; // 공휴일
	DATE* p2 = &days2;

	while (1)
	{
		printf("날짜(연원일)? ");
		scanf("%d %d %d", &days1.year, &days1.month, &days1.day);

		if (days1.year == 0 && days1.month == 0 && days1.day == 0)
		{
			printf("종료합니다.\n");
			break;
		}

		if (is_same_date(p1, p2))
		{
			printf("%d/%d/%d은 공휴일입니다.\n", days1.year, days1.month, days1.day);
		}
		else
		{
			printf("%d/%d/%d은 공휴일이 아닙니다.\n", days1.year, days1.month, days1.day);
		}
	}
	
}

int main()
{
	print_date();
	return 0;

}
