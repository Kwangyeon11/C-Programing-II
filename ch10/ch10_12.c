/*   파일명: ch10_12.c
	 내  용: PA12. low word, high word 값을 매개변수로 전달받아 mydata 공용체로 만들어 리턴하는 make_dword 함수를 정의하시오.(난이도 2)
	 작성자: 주광연
	 날  짜: 2025.10.01
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
