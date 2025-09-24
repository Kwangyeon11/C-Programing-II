// 25. 08. 08 (텍스트 파일 입출력, fprintf, fscanf)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct login 
{
    char id[20];
    char password[20];
} LOGIN;

void print_file()
{
    FILE* fp = NULL; 
    LOGIN file[20]; 
	int file_count = 0; // 핵심

    fp = fopen("password.txt", "r");
    if (fp != NULL) 
    {
        while (file_count < 20 && fscanf(fp, "%s %s", file[file_count].id, file[file_count].password) == 2)
        {
            file_count++;
        }
        fclose(fp);
    }

    while (1)
    {
        char input_id[20], input_pw[20]; 
        int found = 0; // 체크

        printf("ID? ");
        scanf("%s", input_id);

        if (strcmp(input_id, ".") == 0)
            break;

        for (int i = 0; i < file_count; i++) 
        {
            if (strcmp(input_id, file[i].id) == 0) 
            {
                found = 1;
                printf("Password? ");
                scanf("%s", input_pw);

                if (strcmp(input_pw, file[i].password) == 0) 
                {
                    printf("로그인 성공!\n");
                }
                else 
                {
                    printf("비밀번호가 틀렸습니다.\n");
                }
                break;
            }
        }

        if (!found) // 코드가 간결하고 효율적
        {
            printf("ID를 찾을 수 없습니다. 등록하시겠습니까(y/n)? ");
            char choice;
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y')
            {
                if (file_count < 20)
                {
                    while (1)
                    {
                        strcpy(file[file_count].id, input_id);
                        printf("PW? ");
                        scanf("%s", file[file_count].password);

                        printf("PW again? ");
                        scanf("%s", input_pw);

                        if (strcmp(file[file_count].password, input_pw) == 0)
                        {
                            printf("ID and PW registered successfully.\n");
                            file_count++;
                            break;
                        }
                        else
                        {
                            printf("Password doesn't match.\n");
                        }
                    }
                }
                else 
                {
                    printf("등록할 수 있는 ID가 최대치에 도달했습니다.\n");
                }
            }
            else if (choice == 'n' || choice == 'N') 
            {
                printf("등록을 취소합니다.\n");
            }
            else 
            {
                printf("잘못된 입력입니다.\n");
            }
        }
    }

    // 프로그램 종료 전에 파일에 저장
    fp = fopen("password.txt", "w");  // 쓰기 모드로 열기
    if (fp == NULL) 
    {
        printf("파일 저장 중 오류가 발생했습니다.\n");
        exit(1);
    }

    for (int i = 0; i < file_count; i++) 
    {
        fprintf(fp, "%s %s\n", file[i].id, file[i].password); // 기존 printf문과 같고 앞에 스트림 연결을 위한 fp 추가
    }

    fclose(fp);
    return;
}

int main()
{
    print_file();
    return 0;
}
