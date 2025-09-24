// 25. 07. 16

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void arith_seq(int arr[], int size, int first, int diff)
{
	arr[0] = first;

	int i;
	for (i = 1; i < size; i++)
	{
		arr[i] = arr[i-1] + diff;
	}

	printf("등차수열: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void print_element()
{
	int x[SIZE] = { 0 };
	int* px = x;
	int first, cdiff;

	printf("첫 번째 항? ");
	scanf("%d", &first);

	x[0] = first;

	printf("공차? ");
	scanf("%d", &cdiff);

	arith_seq(x, SIZE, x[0], cdiff);
}

int main()
{
	print_element();

	return 0;
}