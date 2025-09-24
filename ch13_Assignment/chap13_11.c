#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define USE_USA_FORMAT 1

typedef struct date{
	char year[10];
	char month[10];
	char day[10];
} DATE;

void print_date() {
	FILE* fp = NULL;
	
	DATE date; // 콘솔에서
	DATE holiday; // 파일에서

	const char* MONTH_NAMES[] = {
	"", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
	"Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
	};

	fp = fopen("date.txt", "r");
	if (fp == NULL) {
		printf("파일 열기 오류\n");
		return;
	}

	while (1) {
		printf ("날짜(연월일)? ");
		scanf ("%s %s %s", &date.year, &date.month, &date.day);
		
		if (strcmp(date.year, "0") == 0 && strcmp(date.month, "0") == 0 && strcmp(date.day, "0") == 0)
			break;

		while (fscanf(fp, "%s %s %s", &holiday.year, &holiday.month, &holiday.day) != NULL) {
			if (strcmp(date.year, holiday.year) == 0 && strcmp(date.month, holiday.month) == 0 && strcmp(date.day, holiday.day) == 0) {
				int month_num = atoi(date.month); // 문자열 월을 숫자 월로 변환
				
				if (USE_USA_FORMAT == 1)
					printf("%s %s %s은 ", MONTH_NAMES[month_num], date.day, date.year); // 숫자 월을 인덱스로 이용
				else if (USE_USA_FORMAT == 0)
					printf("%s/%s/%s은 ", date.year, date.month, date.day);

				printf("공휴일입니다.\n");
				break;
			}
			else {
				int month_num = atoi(date.month); // 문자열 월을 숫자 월로 변환

				if (USE_USA_FORMAT == 1)
					printf("%s %s %s은 ", MONTH_NAMES[month_num], date.day, date.year);
				else if (USE_USA_FORMAT == 0)
					printf("%s/%s/%s은 ", date.year, date.month, date.day);

				printf("공휴일이 아닙니다.\n");
				break;
			}
		}
	}
	fclose(fp);

	return;
}

void set_as_today(DATE* date) {
}
void is_same_date(DATE* date1, DATE* date2) {
}

int main() {
	print_date();
   
	return 0;
}