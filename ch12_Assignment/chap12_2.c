// 25. 08. 07

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
		
		for (int i = 0; line[i] != '\0'; i++) {
			if (isupper((unsigned char)line[i])) {
				line[i] = tolower((unsigned char)line[i]);
			}
		}

		printf("%s\n", line);
	}
	
	fclose(fp);
	return;
}

int main()
{
    print_file();
    return 0;
}