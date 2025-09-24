/*   파일명: ch08_02.c
	 내  용: PA02. 배열 원소를 가리키는 포인터와 포인터 연산을 이용해서 실수형 배열의 모든원소를 출력하는 프로그램을 작성하시오.(난이도 1)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_element()
{
	double x[10] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
	double* px = x;

	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%.2f ", *(px + i));
	}
}

int main()
{
	print_element();

	return 0;

}
