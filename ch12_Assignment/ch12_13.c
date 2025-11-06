/*   파일명: ch12_13.c
	 내  용: PA13. 정수의 개수 N을 입력받아 int가 N개 들어갈 수 있는 동적 메모리를 할당받는다. 
	 이 배열에 임의의 정수를 N개 생성해서 채운 다음 텍스트 파일과 2진 파일로 각각 저장하는 프로그램을 작성하시오.
	 작성자: 주광연
	 날  짜: 2025.11. 06
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int save_files(int n, const int* arr, const char* filename) {
    char txt_name[128];
    sprintf(txt_name, "%s.txt", filename);

    FILE* txt_fp = fopen(txt_name, "w");
    if (!txt_fp) {
        printf("텍스트 파일을 열 수 없습니다.\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        fprintf(txt_fp, "%d ", arr[i]);
    }

    fclose(txt_fp);
    return 1;
}

int save_bin_file(int n, const int* arr, const char* filename) {
    char bin_name[128];
    sprintf(bin_name, "%s.dat", filename);

    FILE* bin_fp = fopen(bin_name, "wb");
    if (!bin_fp) {
        printf("2진 파일을 열 수 없습니다.\n");
        return 0;
    }

    fwrite(arr, sizeof(int), n, bin_fp);

    fclose(bin_fp);
    return 1;
}

void print_result() {
    int N;
    char filename[100];

    printf("정수의 개수? ");
    scanf("%d", &N);
    getchar();

    printf("파일명? ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = '\0';

    int* arr = (int*)malloc(sizeof(int) * N);
    if (!arr) {
        printf("메모리 할당 실패\n");
        return;
    }

    srand((unsigned)time(NULL));
    for (int i = 0; i < N; i++) {
        arr[i] = rand();
    }

    if (save_files(N, arr, filename) && save_bin_file(N, arr, filename)) {
        printf("%s.txt와 %s.dat를 생성했습니다.\n", filename, filename);
    }

    free(arr);
}

int main() {
    print_result();
    return 0;
}
