#include <stdio.h>

void main() {
    int x = 1 | 2;
    int y = (x == 2 ? 3 : 2);
    printf("Initial:\nx:%d\ny:%d\n\n", x, y);
    x = 4 << y;
    printf("x nach linksshift über y: %d\n\n", x);
    y = x++ + 2;
    printf("x:%d\ny:%d", x, y);
}