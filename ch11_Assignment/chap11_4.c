// 25. 08. 01

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int fibonacci(int n)
{
	static int result[20] = { 0 };
	
	if (n < 0) n = -n;
	if (n == 0 || n == 1) return 1;

	if (result[n] != 0) return result[n];
	
	result[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return result[n];
}

void print_digit()
{
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", fibonacci(i));
	}
	printf("\n");

}

int main()
{
	print_digit();
	return 0;
}