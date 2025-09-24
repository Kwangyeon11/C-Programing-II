/*   파일명: ch11_03.c
	 내  용: PA03. fibonacci 함수를 이용해서 0~19번 항을 출력하는 프로그램을 작성하시오.(난이도 2)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int fibonacci(int n)
{
	if (n < 0) n = -n;
	if (n == 0 || n == 1) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

void print_digit()
{
	int arr[20];

	for (int i = 0; i < 20; i++)
	{
		arr[i] = fibonacci(i);
		printf("%d ", arr[i]);
	}
	printf("\n");

}

int main()
{
	print_digit();
	return 0;

}
