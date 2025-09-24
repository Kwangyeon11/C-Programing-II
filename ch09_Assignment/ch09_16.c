/*   파일명: ch09_16.c
	 내  용: PA16. 사용자 5명의 아이디와 패스워드가 이미 등록되어 있을 때, 
	 입력받은 아이디에 해당하는 패스워드와 사용자가 입력한 패스워드가 일치하면 로그인을 허용하는 프로그램을 작성하시오.(난이도 3)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int identify_id(char* str1, char* str2)
{
    
    char id[5][24] = { "parkjimin", "kusananyo", "user1", "user2", "user3" };
    char pw[5][24] = { "@Best0fMe@", "2434", "abcd", "efgh", "ijkl" };
    
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(str1, id[i]) == 0)
        {
            if (strcmp(str2, pw[i]) == 0)
            {
                printf("로그인 성공!\n");
                return 1;
            }
            else
            {
                printf("패스워드가 틀렸습니다.\n");
                return 0;
            }
        }
    }

    printf("해당 ID가 없습니다.\n");
    return 0;
}

void print_str()
{
    char login_i[24];
    char login_p[24];
	int attempts = 0; // 호출 시 0으로 초기화 되므로 전역변수 선언이 적절

    while (attempts < 3)
    {
        
        printf("ID: ");
        gets_s(login_i, sizeof(login_i));

        printf("PW: ");
        gets_s(login_p, sizeof(login_p));

        if (identify_id(login_i, login_p))
			return; // 로그인 성공 시 함수 종료
        else
            attempts++;

    }
    printf("\n로그인 3회 실패. 프로그램을 종료합니다.\n");
}

int main()
{
    print_str();
    return 0;

}
