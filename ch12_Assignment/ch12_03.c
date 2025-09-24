/*   파일명: ch12_03.c
	 내  용: PA03. 텍스트 파일의 이름을 입력받아서 파일 내의 문자들에 대하여 영문자의 개수를 문자별로 세서 출력하는 프로그램을 작성하시오.(난이도 2)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void print_file()
{
	FILE* fp = NULL;
	char filename[BUFSIZ];
	char line[BUFSIZ];
	char alphabet[26] = { 0 };
	

	printf("파일명? ");
	fgets(filename, sizeof(filename), stdin);
	filename[strcspn(filename, "\n")] = '\0';

	fp = fopen(filename, "r");
	if (fp == NULL) {
		printf("파일을 열 수 없습니다.\n");
		exit(1);
	}

	while (fgets(line, sizeof(line), fp) != NULL)
	{
		line[strcspn(line, "\n")] = '\0';
		printf("%s\n", line);
		
		for (int i = 0; line[i] != '\0'; i++)
		{
			if (isalpha((unsigned char)line[i])) 
			{
				char lower = tolower((unsigned char)line[i]);
				alphabet[lower - 'a']++;
			}
		}
	}
	/*
	int counts[26] = {0};  // 알파벳 a~z 각각의 개수를 저장하는 배열

	char ch = 'e';
	counts[ch - 'a']++;  // e → 101 - 97 = 4 → counts[4] 값이 1 증가
	'e' - 'a'는 첫 문자와의 거리이고 곧 알파벳의 인덱스
	*/

	fclose(fp);
	
	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] > 0)
		{
			printf("%c:%-4d", 'a' + i, alphabet[i]);
		}
	}

	return;
}

int main()
{
	print_file();
	return 0;

}
