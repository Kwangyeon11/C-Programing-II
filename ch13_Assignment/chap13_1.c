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
