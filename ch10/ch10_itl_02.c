/*   파일명: ch10_itl_02.c
	 내  용: in the lab, 열거체와 열거 상수의 정의 및 사용
	 작성자: 주광연
	 날  짜: 2025.10. 01
*/

#include <stdio.h>

enum direction { NORTH, SOUTH, EAST, WEST };

int main() {
	enum direction d1 = NORTH;

	d1 = EAST;
	printf("d1 = %d\n", d1);


	switch (d1) // enum열거체 내부가 정수값, swtich문의 조건으로 쓰기 좋음
	{
	case NORTH:
		printf("북쪽으로 이동합니다.\n");
		break;
	case SOUTH:
		printf("남쪽으로 이동합니다.\n");
		break;
	case EAST:
		printf("동쪽으로 이동합니다.\n");
		break;
	case WEST:
		printf("서쪽으로 이동합니다.\n");
		break;
	}
	
	return 0;
}