/*   ���ϸ�: ch10_itl_02.c
	 ��  ��: in the lab, ����ü�� ���� ����� ���� �� ���
	 �ۼ���: �ֱ���
	 ��  ¥: 2025.10. 01
*/

#include <stdio.h>

enum direction { NORTH, SOUTH, EAST, WEST };

int main() {
	enum direction d1 = NORTH;

	d1 = EAST;
	printf("d1 = %d\n", d1);


	switch (d1) // enum����ü ���ΰ� ������, swtich���� �������� ���� ����
	{
	case NORTH:
		printf("�������� �̵��մϴ�.\n");
		break;
	case SOUTH:
		printf("�������� �̵��մϴ�.\n");
		break;
	case EAST:
		printf("�������� �̵��մϴ�.\n");
		break;
	case WEST:
		printf("�������� �̵��մϴ�.\n");
		break;
	}
	
	return 0;
}