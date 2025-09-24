/*   파일명: ch13_02.c
	 내  용: PA02. FILL_ARRAY 함수 매크로와 PRINT_ARRAY 함수 매크로를 정의하고, 
     크기가 10인 int 배열에 대하여 입력받은 값으로 배열 전체를 채우고 출력하는 프로그램을 작성하시오.(난이도 1)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define FILL_ARRAY(arr, size, value) { \
    for (int i = 0; i < size; i++) { \
        arr[i] = value; \
    } \
}

#define PRINT_ARRAY(arr, size) { \
    printf("["#arr"] "); \
    for (int i = 0; i < size; i++) { \
        printf("%d ", arr[i]); \
    } \
}

void print_arr() {
    int value;
    int x[10] = { 0 };
    const int size = 10;

    printf("Á¤¼ö ¹è¿­ÀÇ ÃÊ±â°ª? ");
    scanf(" %d", &value);

    FILL_ARRAY(x, size, value);
    
    PRINT_ARRAY(x, size);

}

int main() {
    print_arr();
    return 0;
}

