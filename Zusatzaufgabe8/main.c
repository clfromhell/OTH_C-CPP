#include <stdio.h>

void main() {
    int x[3] = {10, 20, 30};
    int y[3] = {40, 50, 60};
    int *p1 = x + 1;
    int *p2 = &y[2];
    int **pp1 = &p1;
    int **pp2 = &p2;
    int ***ppp = &pp1;

    ***ppp += 1;
    **ppp -= 1;
    ppp = &pp2;
    **ppp -= 1;
    *p1 = 2;
    **pp2 += 3;

    printf("x0: %d, x1: %d, x2: %d\n", x[0], x[1], x[2]);
    printf("y0: %d, y1: %d, y2: %d\n", y[0], y[1], y[2]);


}