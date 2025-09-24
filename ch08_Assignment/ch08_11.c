/*   파일명: ch08_11.c
	 내  용: PA11. 직사각형의 가로, 세로의 길이를 입력받은 다음 get_rect_info 함수를 이용해서 직사각형의 넓이와 둘레를 구해서 출력하는 프로그램을 작성하시오.(난이도 3)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_rect_info(int x, int y)
{
	 int len = 2 * (x + y);
	 int area = x * y;

	 printf("³ÐÀÌ: %d, µÑ·¹: %d\n", area, len);
}

void print_rect()
{
	int x, y;

	printf("°¡·Î? ");
	scanf("%d", &x);
	printf("¼¼·Î? ");
	scanf("%d", &y);

	get_rect_info(x, y);
}

int main()
{
	print_rect();
	return 0;

}
