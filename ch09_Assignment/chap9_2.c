// 25. 07. 21

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

    printf("문자열? ");
    fgets(str, sizeof(str), stdin);

	remove_spaces(str);
    
    printf("공백 문자 제거후: %s\n", str);

}

int main()
{
    print_str();
    return 0;
}