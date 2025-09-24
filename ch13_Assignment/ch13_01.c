/*   파일명: ch13_01.c
	 내  용: PA01. low byte와 high byte로 워드(2바이트) 크기의 데이터를 만드는 MAKEWORD 매크로와 
     low word와 high word로 더블워드(4바이트) 크기의 데이터를 만드는 MAKEDWORD 매크로를 정의하고 테스트 하시오.(난이도 1)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>

#define MAKEWORD(high, low) (((uint16_t)(high) << 8) | (low))
#define MAKEDWORD(word1, word2) (((uint32_t)(word1) << 16) | (word2))

void print_word()
{
    int high, low;

  
    printf("low and high byte? ");
    scanf("%x %x", &high, &low);
    uint16_t word1 = MAKEWORD(high, low);
    printf("WORD 1: %04X\n", word1);

    printf("low and high byte? ");
    scanf("%x %x", &high, &low);
    uint16_t word2 = MAKEWORD(high, low);
    printf("WORD 2: %04X\n", word2);  
    
    uint32_t dword = MAKEDWORD(word1, word2);
    printf("DWORD : %08X\n", dword);  
}

int main()
{
    print_word();
    return 0;
}

