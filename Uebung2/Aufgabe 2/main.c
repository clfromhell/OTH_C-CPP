#include <stdio.h>

int main() {
    int Inp1, Inp2, OuAdd, OuSub, OuMul;
    float OuDiv;

    scanf("%d", &Inp1);
    scanf("%d", &Inp2);

    OuAdd = Inp1 + Inp2;
    OuSub = Inp1 - Inp2;
    OuMul = Inp1 * Inp2;
    OuDiv = (Inp1 / Inp2);

    printf("Addition: %d\n", OuAdd);
    printf("Subtraktion: %d\n", OuSub);
    printf("Multiplikation: %d\n", OuMul);
    printf("Division: %f\n", OuDiv);

    return 0;
}