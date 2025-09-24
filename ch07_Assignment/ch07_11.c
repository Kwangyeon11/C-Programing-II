/*   파일명: ch07_11.c
	 내  용: PA11. 학생이 모두 5명일 때, 학생별 총점을 구하고 중간고사, 기말고사, 팀프로젝트, 출석의 평균점을 구해서 출력하는 프로그램을 작성하시오.
	 작성자: 주광연
	 날  짜: 2025.09. 14
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_grade()
{
	int grade[5][4] = { { 28, 28, 26, 9}, { 30, 27, 30, 10 }, { 25, 26, 24, 8 }, 
		{ 18, 22, 22, 5 }, { 24, 25, 30, 10 } };
	double avr[4] = { 0.0 };

	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		printf(" ÇÐ »ý %3d¹ø:	", i+1);
		for (int j = 0; j < 4; j++)
		{
			printf("%4d", grade[i][j]);
			sum += grade[i][j];
		}
		printf(" ==> %3d\n", sum);
	}
	
	printf(" Ç×¸ñº° Æò±Õ:   ");
	for (int i = 0; i < 4; i++)
	{
		double sum_b = 0.0;
		for (int j = 0; j < 5; j++)
		{
			sum_b += grade[j][i];
		}
		avr[i] = sum_b / 5.0;
		printf("%.2f ", avr[i]);
	}
}

int main()
{
	print_grade();
	return 0;
}


