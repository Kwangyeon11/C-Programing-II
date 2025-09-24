/*   파일명: ch13_03.c
	 내  용: PA03. PRINT_ARRAY 함수 매크로를 int 배열외에 다른 데이터형의 배열을 출력할 수 있도록 수정하시오.(난이도 2)
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

#define PRINT_ARRAY_INT(arr, size) { \
    printf("["#arr"] "); \
    for (int i = 0; i < size; i++) { \
        printf("%d ", arr[i]); \
    } \
    printf("\n"); \
}

#define PRINT_ARRAY_DOUBLE(arr, size) { \
    printf("["#arr"] "); \
    for (int i = 0; i < size; i++) { \
        printf("%.1f ", arr[i]); \
    } \
    printf("\n"); \
}

#define PRINT_ARRAY_CHAR(arr, size) { \
    printf("["#arr"] "); \
    for (int i = 0; i < size; i++) { \
        printf("%c ", arr[i]); \
    } \
    printf("\n"); \
}

void print_arr() {
    double num;
    char ch;

    double x[10] = { 0 };
	char y[10] = { 0 };

    const int size = 10;

    printf("실수 배열의 초기값? ");
    scanf(" %lf", &num);

    FILL_ARRAY(x, size, num);
    PRINT_ARRAY_DOUBLE(x, size);

	printf("\n");
    printf("문자 배열의 초기값? ");
	scanf(" %c", &ch);

    FILL_ARRAY(y, size, num);
    PRINT_ARRAY_CHAR(y, size);

}

int main() {
    print_arr();
    return 0;
}

