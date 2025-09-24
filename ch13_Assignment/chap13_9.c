#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define USE_INT_POINT 1 

typedef struct {
    int x;
    int y;
} POINT;

typedef struct {
    double x;
    double y;
} POINT2;

void get_length_int(POINT* pt1, POINT* pt2) {
    double length = sqrt((pt2->x - pt1->x) * (pt2->x - pt1->x)
        + (pt2->y - pt1->y) * (pt2->y - pt1->y));

    printf("(%d, %d)와 (%d, %d) 사이의 거리: %.6f\n",
        pt1->x, pt1->y, pt2->x, pt2->y, length);
}

void get_length_double(POINT2* pt1, POINT2* pt2) {
    double length = sqrt((pt2->x - pt1->x) * (pt2->x - pt1->x)
        + (pt2->y - pt1->y) * (pt2->y - pt1->y));

    printf("(%.2f, %.2f)와 (%.2f, %.2f) 사이의 거리: %.6f\n",
        pt1->x, pt1->y, pt2->x, pt2->y, length);
}

void print_pt_d() {
    POINT pt1, pt2;
    printf("점의 좌표? ");
    scanf("%d %d", &pt1.x, &pt1.y);
    printf("점의 좌표? ");
    scanf("%d %d", &pt2.x, &pt2.y);
    get_length_int(&pt1, &pt2);
}

void print_pt_f() {
    POINT2 pt1, pt2;
    printf("점의 좌표? ");
    scanf("%lf %lf", &pt1.x, &pt1.y);
    printf("점의 좌표? ");
    scanf("%lf %lf", &pt2.x, &pt2.y);
    get_length_double(&pt1, &pt2);
}

int main() {
#if USE_INT_POINT == 1
    print_pt_d();
#else
    print_pt_f();
#endif
    return 0;
}