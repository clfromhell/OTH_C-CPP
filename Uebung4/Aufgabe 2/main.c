#include <stdio.h>

int main() {

    int zahl, i = 1, kprim = 0;

    printf("Geben Sie eine positive Zahl ein: ");
    scanf("%d", &zahl);

    printf("\n\n");
    while(i <= zahl){
        if(i != zahl && i != 1 && zahl % i == 0){
            printf("Die Zahl ist durch %d teilbar.\n", i);
            kprim++;
        }
        else if((i == zahl || i == 1) && zahl % i == 0){
            printf("Die Zahl ist durch %d teilbar.\n", i);
        }
        i++;
    }

    if(kprim == 0){
        printf("Die Zahl ist eine Primzahl.\n");
    }
    else{
        printf("Die Zahl ist keine Primzahl.\n");
    }

    return 0;
}