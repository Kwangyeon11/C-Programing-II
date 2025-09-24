/*   파일명: ch11_12.c
	 내  용: PA12. 2개의 정수형 배열을 매개변수로 전달받아 하나의 배열로 합친 다음 정렬 후 리턴하는 merge_array 함수로 작성하시오.(난이도 3)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* merge_arr(int arr1[], int size1, int arr2[], int size2)
{
    int total_size = size1 + size2;

    int* merged = (int*)malloc(total_size * sizeof(int));
    if (merged == NULL) {
        printf("¸Þ¸ð¸® ÇÒ´ç ½ÇÆÐ\n");
        exit(1);
    }

    memcpy(merged, arr1, size1 * sizeof(int));             
    memcpy(merged + size1, arr2, size2 * sizeof(int));      

    return merged;  
}

void print_arr()
{
    int arr1[5] = { 1, 3, 5, 7, 9 };
    int arr2[6] = { 2, 4, 6, 8, 10, 12 };

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int* merged = merge_arr(arr1, size1, arr2, size2); 

	printf("arr1:\n");
    for (int i = 0; i < size1; i++) 
    {
        printf("%d ", arr1[i]);
	}
	printf("arr2:\n");
    for (int i = 0; i < size2; i++) 
    {
        printf("%d ", arr2[i]);
	}

    printf("Merged Array:\n");
    for (int i = 0; i < size1 + size2; i++) 
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    free(merged);  
}

int main()
{
    print_arr();
    return 0;

}
