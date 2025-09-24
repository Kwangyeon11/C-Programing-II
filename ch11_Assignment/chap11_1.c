// 25. 08. 01

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int count_digits(int n);

int count_digits(int n)
{
	if (n < 0) n = -n;
	if (n < 10) return 1;
	return 1 + count_digits(n / 10); // Á¶°Ç¿¡ µû¶ó Àç±Í, return 1Àº ´©ÀûµÊ(ÀÚ¸´¼ö)
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

		int result = count_digits(num);
		printf("count of digits: %d\n", result);
	}
}

int main()
{
	print_digit();
	return 0;
}