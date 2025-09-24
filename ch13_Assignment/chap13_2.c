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

    printf("정수 배열의 초기값? ");
    scanf(" %d", &value);

    FILL_ARRAY(x, size, value);
    
    PRINT_ARRAY(x, size);

}

int main() {
    print_arr();
    return 0;
}
