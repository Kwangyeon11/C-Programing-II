/*   ���ϸ�: ch10_itl_03.c
	 ��  ��: in the lab, ����ü�� ���� �� ��� + RGB ���� ǥ��
	 �ۼ���: �ֱ���
	 ��  ¥: 2025.10. 01
*/

#include <stdio.h>

union test {
	int i;
	char c;
	short s;
};

typedef union color_t {
	unsigned int color;
	unsigned char rgb[4];
} COLOR_T;

void test_union() {
	union test t1 = { 0x12345678 };

	printf("sizeof(union test) = %d\n", sizeof(union test));

	printf("t1.i�� �ּ� = %p\n", &t1.i);
	printf("t1.c �ּ� = %p\n", &t1.c);
	printf("t1.s�� �ּ� = %p\n", &t1.s);

	printf("t1.i = %x\n", t1.i);
	printf("t1.c = %x\n", t1.c);
	printf("t1.s = %x\n", t1.c);
}

void print_color() {
	COLOR_T c1;

	c1.rgb[0] = 0xFF;
	c1.rgb[1] = 0xAB;
	c1.rgb[2] = 0x1F;
	c1.rgb[3] = 0x0;

	printf("rgb color = %08X\n", c1.color);
}

int main() {
	test_union();
	printf("\n\n");
	print_color();
	
	return 0;
}