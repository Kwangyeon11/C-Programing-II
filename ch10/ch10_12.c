/*   ���ϸ�: ch10_12.c
	 ��  ��: PA12. low word, high word ���� �Ű������� ���޹޾� mydata ����ü�� ����� �����ϴ� make_dword �Լ��� �����Ͻÿ�.(���̵� 2)
	 �ۼ���: �ֱ���
	 ��  ¥: 2025.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef union {
    unsigned int dword;
    struct {
        unsigned short low_word;
        unsigned short high_word;
    };
} MYDATA;

unsigned int make_dword(unsigned short low, unsigned short high) {
    MYDATA data;
    data.low_word = low;
    data.high_word = high;
    return data.dword;
}

int main() {
    unsigned short low, high;

    printf("low word? ");
    scanf("%hx", &low);      
    printf("high word? ");
    scanf("%hx", &high);

    unsigned int result = make_dword(low, high);
    printf("dword data: %08x\n", result);

    return 0;
}
