/*   파일명: ch09_03.c
	 내  용: PA03. 입력받은 문자열의 소문자는 대문자로, 대문자는 소문자로 변환하는 프로그램을 작성하시오.(난이도 1)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> // isupper, islower, toupper, tolower

void convert_str(char* str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (islower((unsigned char)str[i])) 
        {
            str[i] = toupper((unsigned char)str[i]); 
        }
        else if (isupper((unsigned char)str[i])) 
        {
            str[i] = tolower((unsigned char)str[i]); 
		}
	}
}

void print_str()
{
    char str[1000];

    printf("¹®ÀÚ¿­? ");
    fgets(str, sizeof(str), stdin);
    
    convert_str(str);

    printf("º¯È¯ ÈÄ: %s\n", str);

}

int main()
{
    print_str();
    return 0;

}
