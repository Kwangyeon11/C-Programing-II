/*   파일명: ch10_itl_01.c
	 내  용: in the lab, 비트필드의 정의 및 사용
	 작성자: 주광연
	 날  짜: 2025.10. 01
*/

#include <stdio.h>

typedef struct date {
	unsigned short year : 7;
	unsigned short month : 4;
	unsigned short day : 5;
} DATE;

int main() {
	DATE dday;

	dday.year = 22;
	dday.month = 11;
	dday.day = 30;

	printf("DATE의 크기 \ %d\n", sizeof(DATE));
	printf("%d/%d/%d\n", dday.year + 2000, dday.month, dday.day);

	return 0;
}