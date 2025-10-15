/*   파일명: ch11_itl_01.c
	 내  용: in the lab, 재귀함수(팩토리얼, 최대공약수)
	 작성자: 주광연
	 날  짜: 2025.10. 15
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int get_factorial(int n) {
	if (n <= 1)
		return 1;
	return n * get_factorial(n - 1);
}

int get_gcd(int x, int y) {
	if (x % y == 0)
		return y;
	return get_gcd(y, x % y);
}

void print_result() {
	int num;
	int x, y;
	int factorial, gcd;

	printf("정수 n을 입력: ");
	scanf(" %d", &num);

	factorial = get_factorial(num);
	printf("%d! = %d\n", num, factorial);

	printf("두 정수 x, y를 입력: ");
	scanf(" %d %d", &x, &y);

	gcd = get_gcd(x, y);
	printf("두 정수 %d, %d의 GCD = %d\n", x, y, gcd);

	return 0;
}

int main() {
	print_result();

	return 0;
}