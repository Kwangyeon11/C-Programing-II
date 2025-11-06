// 25. 08. 13 ( rewind(fp), (c = getchar()) != '\n' && c != EOF) )

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
    FILE* fp = fopen("mycontact.txt", "r");
    if (!fp) {
        printf("파일을 열 수 없습니다.\n");
        exit(1);
    }

    int count = 0;
    CONTACT temp;

    while (fscanf(fp, "%19s %19s", temp.name, temp.num) == 2) {
        count++;
    }

    if (count == 0) {
        printf("연락처가 없습니다.\n");
        fclose(fp);
        return;
    }

    CONTACT* mycon = malloc(sizeof(CONTACT) * count);
    if (!mycon) {
        printf("메모리 할당 실패\n");
        fclose(fp);
        exit(1);
    }

    // 파일 위치 되돌리고 데이터 읽기
    rewind(fp);
    for (int i = 0; i < count; i++) {
        fscanf(fp, "%19s %19s", mycon[i].name, mycon[i].num);
    }
    fclose(fp);

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
            break;

        int found = 0;
        for (int i = 0; i < count; i++) {
            if (strcmp(temp.name, mycon[i].name) == 0) {
                printf("%s의 전화번호 %s로 전화를 겁니다....\n", mycon[i].name, mycon[i].num);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("연락처를 찾을 수 없습니다.\n");
        }
    }

    free(mycon);
}

int main()
{
    contact_txt();
    return 0;
}
