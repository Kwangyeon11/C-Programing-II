/*   파일명: ch12_14.c
     내  용: PA14.13번 프로그램을 실행해서 크기가 다른 2진 파일을 2개 생성한 다음 
     두 파일을 읽어서 하나의 int 배열을 생성한 다음 정렬 후에 다시 2진 파일로 저장하는 프로그램을 작성하시오.
     작성자: 주광연
     날  짜: 2025.11. 07
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int compare_int(const void* a, const void* b) {
    int x = *(int*)a;
    int y = *(int*)b;
    if (x < y) return -1;
    else if (x > y) return 1;
    else return 0;
}

// 2진 파일 저장 함수
int save_bin_file(int n, const int* arr, const char* filename) {
    FILE* bin_fp = fopen(filename, "wb");
    if (!bin_fp) {
        printf("파일 %s을(를) 열 수 없습니다.\n", filename);
        return 0;
    }

    fwrite(&n, sizeof(int), 1, bin_fp);  // 데이터 개수 저장
    fwrite(arr, sizeof(int), n, bin_fp); // 정수 데이터 저장
    fclose(bin_fp);
    return 1;
}

// 2진 파일 읽기 함수
int* read_bin_file(const char* filename, int* out_size) {
    FILE* bin_fp = fopen(filename, "rb");
    if (!bin_fp) {
        printf("파일 %s을(를) 열 수 없습니다.\n", filename);
        return NULL;
    }

    int n;
    if (fread(&n, sizeof(int), 1, bin_fp) != 1) {
        printf("파일 %s 읽기 오류\n", filename);
        fclose(bin_fp);
        return NULL;
    }

    int* arr = (int*)malloc(sizeof(int) * n);
    if (!arr) {
        printf("메모리 할당 실패\n");
        fclose(bin_fp);
        return NULL;
    }

    fread(arr, sizeof(int), n, bin_fp);
    fclose(bin_fp);

    *out_size = n;
    return arr;
}

int* make_random_array(int* size) {
    *size = rand() % 20 + 1; 
    int* arr = (int*)malloc(sizeof(int) * (*size));
    for (int i = 0; i < *size; i++) {
        arr[i] = rand() % 1000;
    }
    return arr;
}

void print_result() {
    srand((unsigned)time(NULL));

    char file1[64], file2[64], out_file[64];
    int n1, n2;

    printf("첫 번째 파일명? ");
    scanf("%s", file1);
    int* arr1 = make_random_array(&n1);
    if (save_bin_file(n1, arr1, file1)) {
        printf("정수 %d개를 읽었습니다.\n", n1);
    }

    printf("두 번째 파일명? ");
    scanf("%s", file2);
    int* arr2 = make_random_array(&n2);
    if (save_bin_file(n2, arr2, file2)) {
        printf("정수 %d개를 읽었습니다.\n", n2);
    }

    printf("저장할 파일명? ");
    scanf("%s", out_file);


    int size1, size2;
    int* data1 = read_bin_file(file1, &size1);
    int* data2 = read_bin_file(file2, &size2);
    if (!data1 || !data2) {
        free(arr1);
        free(arr2);
        free(data1);
        free(data2);
        return;
    }

    int total = size1 + size2;
    int* merged = (int*)malloc(sizeof(int) * total);
    memcpy(merged, data1, sizeof(int) * size1);
    memcpy(merged + size1, data2, sizeof(int) * size2);

    qsort(merged, total, sizeof(int), compare_int);

    if (save_bin_file(total, merged, out_file))
        printf("정수 %d개를 저장했습니다.\n", total);

    free(arr1);
    free(arr2);
    free(data1);
    free(data2);
    free(merged);
}

int main() {
    print_result();
    return 0;
}
