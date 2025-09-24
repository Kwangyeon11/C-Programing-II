/*   파일명: ch11_02.c
	 내  용: PA02. 정수를 매개변수로 전달해서 정수에 있는 모든 숫자의 합을 구하는 sum_of_digits 함수를 재귀함수로 정의하시오.(난이도 1)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int n);

int sum_of_digits(int n)
{
	if (n < 0) n = -n;
	if (n < 10) return n;

	return (n % 10) + sum_of_digits(n / 10);
}

void print_digit()
{
	int num;

	while (1)
	{
		printf("Á¤¼ö? ");
		scanf("%d", &num);
		if (num == 0)
			break;
		int result = sum_of_digits(num);
		printf("sum of digits: %d\n", result);
	}
}

int main()
{
	print_digit();
	return 0;

}
