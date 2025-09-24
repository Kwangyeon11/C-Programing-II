/*   파일명: ch12_01.c
	 내  용: PA01. 텍스트 파일의 이름을 입력받아서 파일의 내용을 라인 번호와 함계 출력하는 프로그램을 작성하시오.(난이도 1)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void print_file()
{
    FILE* fp = NULL;
    char filename[BUFSIZ];
    char line[BUFSIZ];
    int line_num = 1;

    printf("파일명? ");
	fgets(filename, sizeof(filename), stdin);
	filename[strcspn(filename, "\n")] = 0;

    fp = fopen(filename, "r"); 
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        exit(1);
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        line[strcspn(line, "\n")] = '\0';
        printf("%3d: %s\n", line_num++, line);
    }

    fclose(fp);
    return;
}

int main()
{
    print_file();
    return 0;

}
