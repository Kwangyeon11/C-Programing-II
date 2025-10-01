/*   파일명: ch10_07.c
	 내  용: PA07. set_as_today 함수와 print_date_eng 함수를 이용해서 오늘 날짜를 영어식 표기법으로 출력하는 프로그램을 작성하시오.
	 작성자: 주광연
	 날  짜: 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>

enum the_month_of_year { Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec }; // ¾²´Â ÀÇ¹Ì¸¦ Àß ¸ð¸£°ÚÀ½

typedef struct date {
  
    int year;
    int the_month;
    int day;

} DATE;

void set_as_today(DATE* p) 
{
    time_t t = time(NULL);
    struct tm* today = localtime(&t);

    p->year = today->tm_year + 1900;
    p->the_month = today->tm_mon + 1;
    p->day = today->tm_mday;

}

void print_date() 
{
    const char* month_names[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun",
                                 "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

    DATE today = { 0 };
    set_as_today(&today);

    printf("Today is %s %d, %d\n", month_names[today.the_month-1], today.day, today.year);
}

int main()
{
    print_date();
    return 0;

}


