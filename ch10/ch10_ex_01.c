/*   ���ϸ�: ch10_ex_01.c
	 ��  ��: exercise, ����ü ���� ����ü Ȱ��
	 �ۼ���: �ֱ���
	 ��  ¥: 2025.10. 01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

enum open_mode { read = 0x0, write, append, text = 0x10, binary = 0x20 };

struct file_info {
	char filename[128];
	enum open_mode mode;

};

int main() {
	struct file_info fin;
	strcpy(fin.filename, "output.txt");
	fin.mode = write | text;

	printf("���ϸ�: %s\n", fin.filename);
	printf("������: %02X\n", fin.mode);

	return 0;
}