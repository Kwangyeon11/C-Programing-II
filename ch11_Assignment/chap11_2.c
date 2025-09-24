// 25. 08. 01

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