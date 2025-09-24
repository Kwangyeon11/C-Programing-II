/*   파일명: ch11_09.c
	 내  용: PA09. 영화 제목을 저장하는 문자열 배열이 있을 때, 문자열 배열을 qsort 함수를 이용해서 오름차순으로 정렬하는 프로그램을 작성하시오.(난이도 2)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare_by_name(const void *e1, const void *e2)
{
	const char* p1 = (const char*)e1;
	const char* p2 = (const char*)e2;
	
	return strcmp(p1, p2);
}

void print_list()
{
	char list[5][20] = {
		"Avengers",
		"MI:Fallout",
		"Ant-Man",
		"Bohemian Rhapsody",
		"Insidious"
	};

	printf("<<Á¤·Ä Àü>>\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", list[i]);
	}

	qsort(list, 5, sizeof(list[0]), compare_by_name);

	printf("<<Á¤·Ä ÈÄ>>\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", list[i]);
	}
}

int main()
{
	print_list();
	return 0;

}
