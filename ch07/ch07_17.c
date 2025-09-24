/*   파일명: ch07_17.c
	 내  용: PA17. 최대 10개의 정수형 원소를 저장할 수 있는 다중집합을 프로그램하시오.
	 작성자: 주광연
	 날  짜: 2025.09. 14
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10

void print_multiset()
{
	int element;
	int arr[MAX] = { 0 };

	for (int i = 0; i < MAX; i++)
	{
		printf("¹è¿­¿¡ Ãß°¡ÇÒ ¿ø¼Ò? ");
		scanf("%d", &element);
		arr[i] = element;
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", arr[j]);
		}
		printf("\n");
	}
}

int main()
{
	print_multiset();

	return 0;

}

