/*   파일명: ch11_01.c
	 내  용: PA01. 정수를 매개변수로 전달해서 정수에 있는 숫자의 개수를 구하는 count_digits 함수를 재귀 함술 정의하시오.
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int count_digits(int n);

int count_digits(int n)
{
	if (n < 0) n = -n;
	if (n < 10) return 1;
	return 1 + count_digits(n / 10); // 조건에 따라 재귀, return 1은 누적됨(자릿수)
}

void print_digit()
{
	int num;

	while (1)
	{
		printf("정수? ");
		scanf("%d", &num);

		if (num == 0)
			break;

		int result = count_digits(num);
		printf("count of digits: %d\n", result);
	}
}

int main()
{
	print_digit();
	return 0;

}
