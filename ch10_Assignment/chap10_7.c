// 25. 07. 29

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>

enum the_month_of_year { Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec }; // 쓰는 의미를 잘 모르겠음

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