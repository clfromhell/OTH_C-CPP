#include <stdio.h>
#include <math.h>

int main(void) {

    int bits, inp, res = 0, n = 1;
    double expo, tmp;
    printf("Geben Sie die Anzahl der Bits an: ");
    scanf("%d", &bits);

    if(bits >= 1){

        while(n <= bits){
            inp = 0;

            printf("Geben Sie das Bit 2^%d an: ", n - 1);
            scanf("%d", &inp);

            if(inp >= 2 || inp <= -1){
                printf("Zahl keine Binärziffer, bitte erneut versuchen.\n");
                n--;
            }
            else {
                expo = n - 1;
                tmp = pow(2, expo);
                res = res + (inp * tmp);
            }

            n++;
        }

        printf("Die Dezimalzahl lautet: %d", res);

    }
    else{
        printf("Bitzahl zu gering.");
    }

    return 0;
}