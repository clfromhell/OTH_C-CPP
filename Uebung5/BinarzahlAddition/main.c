#include <stdio.h>
#include <mem.h>

char string [100];

int main() {

    int laenge = 0;
    int bin1 = 0;
    int bin2 = 0;
    int uebertrag = 0;


    printf("Laenge eingaben: ");
    scanf("%d", &laenge);

    for(int i = 0; i < laenge; i++) {
        printf("Bit %d von Binaerzahl 1 eingaben", i);
        scanf("%d", &bin1);

        printf("Bit %d von Binaerzahl 2 eingaben", i);
        scanf("%d", &bin2);

        switch (uebertrag) {

            case 0:
                if (bin1 == 0 && bin2 == 0) {
                    uebertrag = 0;
                    strcat(string, "0");
                } else if ((bin1 == 1 && bin2 == 0) || (bin1 == 0 && bin2 == 1)) {
                    uebertrag = 0;
                    strcat(string, "1");
                } else {
                    uebertrag = 1;
                    strcat(string, "0");
                }
                break;

            case 1:
                if (bin1 == 0 && bin2 == 0) {
                    uebertrag = 0;
                    strcat(string, "1");
                } else if ((bin1 == 1 && bin2 == 0) || (bin1 == 0 && bin2 == 1)) {
                    uebertrag = 1;
                    strcat(string, "0");
                } else {
                    uebertrag = 1;
                    strcat(string, "1");
                }
                break;

            default: printf("FEHLER");
        }
    }
    printf("%s \n", string);
    if(uebertrag == 1){
        printf("Ueberlauf");
    }

    return 0;
}