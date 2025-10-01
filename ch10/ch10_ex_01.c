/*   파일명: ch10_ex_01.c
	 내  용: exercise. 구조체 내부 열거체 활용
	 작성자: 주광연
	 날  짜: 2025.10. 01
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

	printf("파일명: %s\n", fin.filename);
	printf("열기모드: %02X\n", fin.mode);

	return 0;

}
