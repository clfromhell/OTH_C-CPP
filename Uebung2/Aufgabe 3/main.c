#include <stdio.h>

int main() {
    int preis;
    double epreis, apreis, rabatt;

    printf("Preis: ");
    scanf("%d", &preis);
    printf("\nRabatt: ");
    scanf("%lf", &rabatt);

    apreis = preis;
    epreis = apreis - (apreis * (rabatt / 100));

    printf("---------");
    printf("\nPreis: %f Euro\n", apreis);
    printf("Rabatt: %f%\n", rabatt);
    printf("Endpreis: %f Euro", epreis);

    return 0;
}