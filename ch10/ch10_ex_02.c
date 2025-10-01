/*   파일명: ch10_ex_02.c
	 내  용: exercise. 비트필드와 공용체를 이용한 1바이트 크기의 명령어를 처리하는 간단한 CPU 시뮬레이팅 코드
	 작성자: 주광연
	 날  짜: 2025.10. 01
*/

#include <stdio.h>

struct inst {
	unsigned char opcode : 2;
	unsigned char lhs : 3;
	unsigned char rhs : 3;
};

enum { add, sub, mul, div };

typedef union instruction {
	unsigned char byte;
	struct inst encode;
} INSTRUCTION;

void decode(INSTRUCTION inst) {
	INSTRUCTION u1 = inst;
	const char* opcode_names[] = { "add", "sub", "mul", "div" };

	printf("Instruction %02X means %s %d %d\n", inst.byte, opcode_names[u1.encode.opcode], u1.encode.lhs, u1.encode.rhs);
}

int main() {
	INSTRUCTION code[] = { 0xa8, 0xb2, 0x1c, 0x9f, 0x44 };
	int size = sizeof(code) / sizeof(code[0]);
	int i;
	for (i = 0; i < size; i++)
		decode(code[i]);

	return 0;

}
