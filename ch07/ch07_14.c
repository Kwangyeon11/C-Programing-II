/*   파일명: ch07_14.c
	 내  용: PA14. 임의로 순서를 뒤섞는 셔풀 기능을 이용해 크기가 10인 정수형 배열의 원소를 임의의 순서로 뒤섞는 프로그램을 작성하시오.
	 작성자: 주광연
	 날  짜: 2025.09. 14
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void shuffle_music()
{
	int music[SIZE] = { 0 };
	
	srand(time(NULL));
	printf("¼ÅÇÃ Àü: ");
	for (int i = 0; i < SIZE; i++)
	{
		music[i] = rand() % 100;
		printf("%d ", music[i]);
	}
	printf("\n");

	for (int i = 0; i < SIZE; )
	{
		int num = 0;
		num = rand() % SIZE;
		if (num < i) continue;
		else 
		{
			int temp = 0;
			temp = music[i];
			music[i] = music[num];
			music[num] = temp;
			i++;
		}
	}
	printf("¼ÅÇÃ ÈÄ: ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", music[i]);
	}
	printf("\n");
}

int main()
{
	shuffle_music();

	return 0;
}





