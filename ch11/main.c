/*   파일명: main.c
	 내  용: static, extern 활용
	 작성자: 주광연
	 날  짜: 2025.10. 14
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "function.h"

extern int get_id();
//extern int last_id;

int main(int argc, char* argv[]) {
	printf("추석 잘 보냈어요?\n");

	printf("회원1의 id = %d\n", get_id()); //1001
	printf("회원2의 id = %d\n", get_id()); //1002
	printf("회원3의 id = %d\n", get_id()); //1003

	//printf("last_id = %d\n", last_id);

	return 0;
}

