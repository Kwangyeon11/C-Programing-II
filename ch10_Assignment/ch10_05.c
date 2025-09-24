/*   파일명: ch10_05.c
	 내  용: PA02. DATE 구조체와 set_as_today, print_date 함수를 이용해서 오늘 날짜를 출력하는 프로그램을 작성하시오. (난이도 2)
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

void set_as_today(int* year, int* month, int* day) // (DATE *p)
{
	time_t t = time(NULL);
	struct tm* today = localtime(&t);
	int y, m, d;
	y = today->tm_year + 1900; // tm_year is years since 1900
	m = today->tm_mon + 1; // tm_mon is months since January (0-11)
	d = today->tm_mday; // tm_mday is day of the month (1-31)

	*year = y;
	*month = m;
	*day = d;

	return;
}

void print_date()
{
	DATE days = { 0 };
	DATE* p = &days;
	set_as_today(&days.year, &days.month, &days.day);
	
	printf("¿À´Ã ³¯Â¥´Â %d/%d/%d ÀÔ´Ï´Ù.\n", days.year, days.month, days.day);

}

int main()
{
	print_date();
	return 0;

}
