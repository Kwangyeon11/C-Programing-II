/*   파일명: ch07_07.c
	 내  용: PA07. 크기가 20인 배열을 선언해서 입력받은 값으로 배열 전체를 채우고 출력하는 프로그램을 작성하시오.
	 작성자: 주광연
	 날  짜: 2025.09. 14
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20

void fill_array(int arr[], int size, int num)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = num;
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

void print_array()
{
	int num;
	int arr[SIZE] = { 0 };

	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &num);

	fill_array(arr, SIZE, num);
	printf("\n");
}

int main()
{
	print_array();

	return 0;

}

