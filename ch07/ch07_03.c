/*   파일명: ch07_03.c
	 내  용: PA03. 특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소 중 최댓값과 최솟값을 찾아서 출력하는 프로그램을 작성하시오.
	 작성자: 주광연
	 날  짜: 2025.09. 14
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_max(int arr[], int size)
{
	int max = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}
int find_min(int arr[], int size)
{
	int min = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}

void print_num()
{
	int arr[] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("¹è¿­: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("ÃÖ´ñ°ª: %d\n", find_max(arr, size));
	printf("ÃÖ´ñ°ª: %d\n", find_min(arr, size));
}

int main()
{
	print_num();

	return 0;

}


