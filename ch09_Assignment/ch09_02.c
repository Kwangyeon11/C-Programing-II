/*   파일명: ch09_02.c
	 내  용: PA02. remove_space 함수를 이용해서 입력받은 문자열에서 빈칸을 모두 제거하고 출력하는 프로그램을 작성하시오.(난이도 2)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

void remove_spaces(char* str)
{
    int i, j;
    
    for (i = 0; str[i] != '\0'; i++)
   {
       if (isspace((unsigned char)str[i]))
       {
           for (j = i; str[j] != '\0'; j++)
           {
               str[j] = str[j + 1];
		   }
       }
   }
}

void print_str()
{
    char str[1000];
    int count = 0;

    printf("¹®ÀÚ¿­? ");
    fgets(str, sizeof(str), stdin);

	remove_spaces(str);
    
    printf("°ø¹é ¹®ÀÚ Á¦°ÅÈÄ: %s\n", str);

}

int main()
{
    print_str();
    return 0;

}
