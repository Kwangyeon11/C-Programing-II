/*   파일명: ch08_01.c
	 내  용: PA01. 크기가 3인 double형 배열의 모든 원소의 주소를 출력하는 프로그램을 작성하시오.(난이도 1)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_element()
{
	double x[3] = { 0 };

	int i;
	for (i = 0; i < 3; i++)
	{
		printf("x[%d]ÀÇ ÁÖ¼Ò: %8p\n", i, x + i);
	}
}

int main()
{
	print_element();
	
	return 0;

}
