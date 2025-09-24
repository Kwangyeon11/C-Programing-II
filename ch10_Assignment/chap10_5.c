// 25. 07. 29

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
	
	printf("오늘 날짜는 %d/%d/%d 입니다.\n", days.year, days.month, days.day);

}

int main()
{
	print_date();
	return 0;
}