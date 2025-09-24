// 25. 07. 16

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