/*   파일명: ch08_06.c
	 내  용: PA06. 크기가 10인 int 배열에 대해서 원하는 값으로 초기값을 채운 다음 get_min_max 함수로 최댓값과 최솟값을 찾아서 출력하시오.(난이도 2)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

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
