/*   파일명: ch08_05.c
	 내  용: PA05. arith_seq 함수를 이용해서 입력받은 첫 번째 항과 공차로 크기가 10인 정수형 배열에 대하여 등차수열을 구하고 출력하는 프로그램을 작성하시오.(난이도 2)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/


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

	printf("µîÂ÷¼ö¿­: ");
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

	printf("Ã¹ ¹øÂ° Ç×? ");
	scanf("%d", &first);

	x[0] = first;

	printf("°øÂ÷? ");
	scanf("%d", &cdiff);

	arith_seq(x, SIZE, x[0], cdiff);
}

int main()
{
	print_element();

	return 0;

}
