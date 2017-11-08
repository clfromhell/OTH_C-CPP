#include <stdio.h>

int main() {
    int leng;

    //Einlesen der Arraylänge
    printf("Geben Sie die Zahl der einzugebenden Werte an: ");
    scanf("%d", &leng);

    //Prüfen ob Arraylänge in Ordnung ist
    if(leng >= 1) {

        int i = 0, vals[leng], pos = 0, neg = 0, nul = 0, ger = 0, ung = 0, fg = 0, fk = 0, kf = 0;

        //Einlesen der Zahlen
        while(i<leng) {
            printf("Geben Sie die Zahl #%d ein: ", i + 1);
            scanf("%d", &vals[i]);
            i++;
        }

        i = 0;

        while(i<leng) {

            if(vals[i] == 0){
                nul ++; //Nullen
            }
            else if(vals[i] <= -1) {
                neg++; //Negative Zahlen
            }
            else{
                pos++; //Positive Zahlen
            }

            if((vals[i] %2) == 1){
                ung++; //Ungerade Zahlen
            }
            else{
                ger++; //Gerade Zahlen
            }

            if(i >= 1 && kf == 0 && leng >= 2){

                if(vals[i] > vals[i - 1] && fg == 0 && fk == 0){
                    fg++; //Folge aufsteigend
                }
                else if(vals[i] < vals[i - 1] && fg == 0 && fk == 0) {
                    fk++; //Folge absteigend
                }
                else if((vals[i] > vals[i - 1] && fk == 1) || (vals[i] < vals[i - 1] && fg == 1)){
                    kf++; //Ausschlusskriterium KEINE FOLGE
                }

            }
            else if(i >= 1 && leng == 1){
                kf++; //Ausschlusskriterium KEINE FOLGE
            }
            i++;

        }
        printf("\n#######################################################\n");
        printf("Ergebnisse: \n\n");
        printf("Gerade Zahlen: %d\n", ger);
        printf("Ungerade Zahlen: %d\n", ung);
        printf("-------------------------------------------------------\n");
        printf("Nullen: %d\n", nul);
        printf("Positive Zahlen: %d\n", pos);
        printf("Negative Zahlen: %d\n", neg);
        printf("-------------------------------------------------------\n");

        if(kf == 0){

            if(fg == 1){
                printf("Die Zahlen stellen eine aufsteigende Folge dar.\n");
                printf("#######################################################\n");
            }
            else if(fk == 1){
                printf("Die Zahlen stellen eine absteigende Folge dar.\n");
                printf("#######################################################\n");
            }
        }
        else{
            printf("Die Zahlen stellen keine Folge dar.\n");
            printf("#######################################################\n");
        }

    }
    else {
        printf("Zahl zu klein.\n");
    }
    return 0;
}