// 25.09. 10 in lab

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int compare_ints(const void* e1, const void* e2)
{
	const int* p1 = (const int*)e1;
	const int* p2 = (const int*)e2;

	return (*p1 - *p2);
}

void print_arr(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void sort_arr()
{
	int arr1[SIZE] = { 1, 5, 7, 3, 10 };

	printf("정렬 전\n");
	print_arr(arr1, SIZE);

	printf("정렬 후\n");
	qsort(arr1, SIZE, sizeof(arr1[0]), compare_ints);
	print_arr(arr1, SIZE);

}

int main()
{
	sort_arr();
	
	return 0;
}