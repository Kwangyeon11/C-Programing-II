/*   파일명: ch07_itl_01.c
	 내  용: in the lab, 배열 출력
	 작성자: 주광연
	 날  짜: 2025.09. 10
*/
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

	printf("Á¤·Ä Àü\n");
	print_arr(arr1, SIZE);

	printf("Á¤·Ä ÈÄ\n");
	qsort(arr1, SIZE, sizeof(arr1[0]), compare_ints);
	print_arr(arr1, SIZE);

}

int main()
{
	sort_arr();
	
	return 0;

}

