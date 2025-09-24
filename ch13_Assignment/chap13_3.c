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
