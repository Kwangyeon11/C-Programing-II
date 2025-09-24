/*   파일명: ch08_12.c
	 내  용: PA12. 정수형 배열과 키 값을 매개변수로 전달받아 배열에서 키 값을 모두 찾아 인덱스를 배열에 저장해서 리천하는 find_all_in_array 함수를 작성하시오.(난이도 3)
	 작성자: 주광연
	 날  짜: 2025.09. 24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void find_all_in_array(int arr[], int size, int key)
{
	int index[10] = { 0 };
	int count = 0;
	int i;
	for (i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			count++;
			index[count-1] = i;
		}
	}
	
	if (count == 0)
	{
		return 0;
	} 
	
	printf("찾은 항목은 모두 %d개입니다.\n", count);
	printf("찾은 항목의 인덱스: ");
	for (i = 0; i < count; i++)
	{
		printf("%d ", index[i]);
	}
}

void print_array()
{
	int arr[10] = { 12, 45, 62, 12, 99, 83, 23, 12, 72, 37 };
	int i;
	int key;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	printf("찾을 값? ");
	scanf("%d", &key);

	find_all_in_array(arr, 10, key);
}

int main()
{
	print_array();	
	return 0;

}
