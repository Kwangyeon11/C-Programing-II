/*   ���ϸ�: ch09_itl_01.c
	 ��  ��: Ű����κ��� ���� ���ڵ带 �� �� �Է¹޾� �ʵ带 �����Ͽ� ����ü �迭�� ������ �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		    ���ڵ� ���� : �̸� | �й� | ���� | �г�
	 �ۼ���: �ֱ���
	 ��  ¥: 2025.09. 24
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
		printf("������ �Է��ϼ���(exit �Է½� ����) : "); 
		gets_s(data, sizeof(data)); 
		if (strcmp(data, "exit") == 0) {
			printf("�����մϴ�.\n"); 
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