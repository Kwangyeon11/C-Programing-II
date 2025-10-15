/*   ���ϸ�: ch11_itl_01.c
	 ��  ��: in the lab, ����Լ�(���丮��, �ִ�����)
	 �ۼ���: �ֱ���
	 ��  ¥: 2025.10. 15
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

	printf("���� n�� �Է�: ");
	scanf(" %d", &num);

	factorial = get_factorial(num);
	printf("%d! = %d\n", num, factorial);

	printf("�� ���� x, y�� �Է�: ");
	scanf(" %d %d", &x, &y);

	gcd = get_gcd(x, y);
	printf("�� ���� %d, %d�� GCD = %d\n", x, y, gcd);

	return 0;
}

int main() {
	print_result();

	return 0;
}