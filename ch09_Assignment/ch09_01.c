/*   파일명: ch09_01.c
	 내  용: PA01. 한 줄의 문자열을 입력받아서 공백 문자의 개수를 세는 프로그램을 작성하시오.(난이도 1)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>  // isspace 함수 사용을 위해 필요

int count_space() 
{
    char str[1000];
    int count = 0;

    printf("문자열? ");
    fgets(str, sizeof(str), stdin); 

    for (int i = 0; str[i] != '\0'; i++) {
		if (isspace((unsigned char)str[i])) { // isspace 함수는 공백 문자를 검사   
            count++;
        }
    }

    printf("공백 문자의 개수: %d\n", count);

    return 0;
}

int main()
{
    count_space();
    return 0;

}

