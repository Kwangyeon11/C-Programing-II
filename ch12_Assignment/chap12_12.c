// 25. 08. 13 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contact {
    char name[20];
    char num[20];
} CONTACT;

void contact_txt()
{
    char filename[24];
	printf("연락처 파일명? ");
	fgets(filename, sizeof(filename), stdin);
	filename[strcspn(filename, "\n")] = '\0';

    FILE* fp = fopen(filename, "r");
    if (!fp) {
        printf("파일을 열 수 없습니다.\n");
        exit(1);
    }

    int count = 0;
    CONTACT temp;

    while (fscanf(fp, "%19s %19s", temp.name, temp.num) == 2) 
    {
        count++;
    }

    if (count == 0) 
    {
        printf("연락처가 없습니다.\n");
        fclose(fp);
        return;
    }

    CONTACT* mycon = malloc(sizeof(CONTACT) * count);
    if (!mycon) 
    {
        printf("메모리 할당 실패\n");
        fclose(fp);
        exit(1);
    }

    // 파일 위치 되돌리고 데이터 읽기
    rewind(fp);
    for (int i = 0; i < count; i++) 
    {
        fscanf(fp, "%19s %19s", mycon[i].name, mycon[i].num);
    }

    printf("%d개의 연락처를 로딩했습니다.\n", count);

    // 입력 버퍼 개행 제거
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    while (1)
    {
        printf("이름(. 입력 시 종료)? ");
        fgets(temp.name, sizeof(temp.name), stdin);
        temp.name[strcspn(temp.name, "\n")] = '\0';

        if (strcmp(temp.name, ".") == 0)
        {
            printf("%s로 %d개의 연락처를 저장했습니다.\n", filename, count);
            break;

        }
            
        int found = 0;
        for (int i = 0; i < count; i++) {
            if (strcmp(temp.name, mycon[i].name) == 0) {
                printf("%s의 전화번호 %s로 전화를 겁니다....\n", mycon[i].name, mycon[i].num);
                found = 1;
                break;
            }
        }
        if (!found) 
        {
            printf("연락처를 찾을 수 없습니다. 연락처를 등록하시겠습니까(y/n)? ");
            char choice;
			scanf(" %c", &choice);
            while (getchar() != '\n'); // 입력 버퍼 개행 제거(중요)
            if (choice == 'y' || choice == 'Y') 
            {
                printf("전화번호? ");
                fgets(temp.num, sizeof(temp.num), stdin);
                temp.num[strcspn(temp.num, "\n")] = '\0';
                // 연락처 추가
                mycon = realloc(mycon, sizeof(CONTACT) * (count + 1));
                if (!mycon) 
                {
                    printf("메모리 할당 실패\n");
                    exit(1);
                }
                strcpy(mycon[count].name, temp.name);
                strcpy(mycon[count].num, temp.num);
                count++;
				fp = fopen(filename, "a");
                if (!fp) 
                {
                    printf("파일을 열 수 없습니다.\n");
                    free(mycon);
                    exit(1);
                }
                fprintf(fp, "%s %s\n", temp.name, temp.num);
                fclose(fp);
				printf("연락처가 등록되었습니다.\n");
                continue;
            } 
            else if (choice == 'n' || choice == 'N') 
            {
                printf("등록을 취소합니다.\n");
                continue;
            } 
            else 
            {
                printf("잘못된 입력입니다.\n");
                continue;
			}
        }
    }

    free(mycon);
}

int main()
{
    contact_txt();
    return 0;
}
