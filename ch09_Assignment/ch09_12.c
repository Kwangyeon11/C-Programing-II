/*   파일명: ch09_12.c
	 내  용: PA12. 입력받은 문자열에 대하여 이동할 글자 수를 입력받아 왼쪽이나 오른쪽으로 회전한 결과를 출력하는 프로그램을 작성하시오.(난이도 3)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int rotate_str(char* str1, int num)
{
    int len = strlen(str1);
    int divise = (len - num);
    ;

    int i;
    for (i = 0; i < (divise / 2); i++) // A group reverse
    {
        char temp = str1[i];
        str1[i] = str1[divise - 1 - i];
		str1[divise - 1 - i] = temp;
    }
    for (i = 0; i < (num / 2); i++) // B group reverse
    {
        char temp = str1[i + divise];
        str1[i + divise] = str1[len - i - 1];
        str1[len - i - 1] = temp;

	}
    for (i = 0; i < len / 2; i++) // ALL reverse
    {
        char temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
	}
    return 1;
  
}

void print_str()
{
    char str1[24] = { NULL };
    
    int shift = 0;

    while (1)
    {
        printf("문자열? ");
        gets_s(str1, sizeof(str1));

        printf("이동할 글자수? ");
        scanf("%d", &shift);

        if (shift == 0)
        {
            printf("종료합니다.\n");
            break;
        }
        if (rotate_str(str1, shift))
        {
            printf("%s\n", str1);
        }
    }
    
}

int main()
{
    print_str();
    return 0;

}
