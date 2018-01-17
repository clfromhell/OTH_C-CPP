#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Ausweis{
    char name[120];
    char vorname[120];
    char geburtstag[10];
};


void main() {
    char yn[1];
    int i = 0;
    struct Ausweis person[20];
    NEU:



    printf("Geben Sie den Nachnamen ein: ");
    fgets(person[i].name, 120, stdin);
    printf("Geben Sie den Vornamen ein: ");
    fgets(person[i].vorname, 120, stdin);
    printf("Geben Sie das Geburtsdatum ein (TT.MM.JJJJ): ");
    fgets(person[i].geburtstag, 10, stdin);

    printf("Wollen Sie eine weitere Person eigeben (y=Ja): ");
    fgets(yn, 1, stdin);
    if(yn == "y"){
        i++;
        goto NEU;
    }



    return;
}