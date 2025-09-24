// 25. 07. 16

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void get_min_max(int arr[], int size)
{
	int max = arr[0];
	int	min = arr[0];
	
	int i;
	for (i = 1; i < size; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	
	for (i = 1; i < size; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}

	printf("ÃÖ´ñ°ª: %d\n", max);
	printf("ÃÖ¼Ú°ª: %d\n", min);
}

void print_element()
{
	int x[SIZE] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int* px = x;

	printf("¹è¿­: ");
	int i;
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", x[i]);
	}
	printf("\n");

	get_min_max(x, SIZE);

}

int main()
{
	print_element();

	return 0;
}