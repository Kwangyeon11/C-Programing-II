/*   파일명: ch09_itl_01.c
	 내  용: 키보드로부터 다음 레코드를 한 줄 입력받아 필드를 구분하여 구조체 배열에 저장한 후 출력하는 프로그램을 작성하시오.
		    레코드 형식 : 이름 | 학번 | 전공 | 학년
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
typedef struct student {
	char name[24]; 
	char id[16]; 
	char major[32];
	int year; 
} STUDENT; 
void print_record() { 
	char data[32]; 
	STUDENT record;
	while (1) { 
		printf("정보를 입력하세요(exit 입력시 종료) : "); 
		gets_s(data, sizeof(data)); 
		if (strcmp(data, "exit") == 0) {
			printf("종료합니다.\n"); 
			break; 
		} 
		const char* dis = "|";
		
		char* token = strtok(data, dis); 

		if (token != NULL) strcpy(record.name, token); 
		token = strtok(NULL, dis); 
		
		if (token != NULL)strcpy(record.id, token);
		token = strtok(NULL, dis);
		 
		if (token != NULL) strcpy(record.major, token);
		
		token = strtok(NULL, dis); 
		if (token != NULL) record.year = atoi(token); 
		
		printf("%s | %s | %s | %d\n", record.name, record.id, record.major, record.year); } 
} 

int main() {
	print_record(); 
	return 0; 
}