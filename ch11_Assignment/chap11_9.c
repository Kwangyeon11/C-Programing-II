// 25. 08. 03

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

	printf("<<정렬 전>>\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", list[i]);
	}

	qsort(list, 5, sizeof(list[0]), compare_by_name);

	printf("<<정렬 후>>\n");

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