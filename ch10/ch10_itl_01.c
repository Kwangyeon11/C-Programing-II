/*   ���ϸ�: ch10_itl_01.c
	 ��  ��: in the lab, ��Ʈ�ʵ��� ���� �� ���
	 �ۼ���: �ֱ���
	 ��  ¥: 2025.10. 01
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

	printf("DATE�� ũ�� \ %d\n", sizeof(DATE));
	printf("%d/%d/%d\n", dday.year + 2000, dday.month, dday.day);

	return 0;
}