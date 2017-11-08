#include <stdio.h>
#include <stdlib.h>

int main() {
    int men;
    float a,b,c;

    Beg:
    printf("Menu (Geben Sie eine der folgenden Nummern ein um fortzufahren:\n");
    printf("1 - Addition\n2 - Subtraktion\n3 - Multiplikation\n4 - Division\n");
    scanf("%d",&men);

    if(men==1){

    }
    else if(men==2){

    }
    else if(men==3){

    }
    else if(men==4){

    }
    else{
        system("cls");
        printf("Falsche Zahl, bitte Wiederholen\n");
        goto Beg;
    }

    return 0;
}