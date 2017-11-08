#include <stdio.h>
#include <math.h>

int main() {

    int i1, i2, tmp1, tmp2, hal1 = 0, dri1 = 0, fue1 = 0, sie1 = 0, hal2 = 0, dri2 = 0, fue2 = 0, sie2 = 0, hal = 0;
    int dri = 0, fue = 0, sie = 0, kgv = 0, prim1 = 1, prim2 = 1, prim = 1;

    BCK:

    i1,i2 = 0;
    printf("Geben Sie die erste positive Zahl ein: ");
    scanf("%d", &i1);
    printf("Geben Sie die zweite positive Zahl ein: ");
    scanf("%d", &i2);

    if(i1 <= 0 || i2 <= 0){
        printf("\nEine der Zahlen ist 0 oder nicht positiv, bitte erneut versuchen.\n");
        goto BCK;
    }

    tmp1 = i1;
    tmp2 = i2;

    while(tmp1 >= 2){
        if(tmp1 % 2 == 0){
            tmp1 = tmp1 / 2;
            hal1++;
        }
        else if(tmp1 % 3 == 0){
            tmp1 = tmp1 / 3;
            dri1++;
        }
        else if(tmp1 % 5 == 0){
            tmp1 = tmp1 / 5;
            fue1++;
        }
        else if(tmp1 % 7 == 0){
            tmp1 = tmp1 / 7;
            sie1++;
        }
        else{
            prim1 = tmp1;
            tmp1 = 1;
        }
    }
    while(tmp2 >=2){
        if(tmp2 % 2 == 0){
            tmp2 = tmp2 / 2;
            hal2++;
        }
        else if(tmp2 % 3 == 0){
            tmp2 = tmp2 / 3;
            dri2++;
        }
        else if(tmp2 % 5 == 0){
            tmp2 = tmp2 / 5;
            fue2++;
        }
        else if(tmp2 % 7 == 0){
            tmp2 = tmp2 / 7;
            sie2++;
        }
        else{
            prim2 = tmp2;
            tmp2 = 1;
        }
    }
    hal = hal1-hal2;
    dri = dri1-dri2;
    fue = fue1-fue2;
    sie = sie1-sie2;

    if(hal<=-1){
        hal = hal - (2*hal);
    }
    if(dri<=-1){
        dri = dri - (2*dri);
    }
    if(fue<=-1){
        fue = fue - (2*fue);
    }
    if(sie<=-1){
        sie = sie - (2*sie);
    }
    if(prim1 == prim2){
        prim = prim1;
    }


    kgv = pow(2,hal) * pow(3,dri) * pow(5,fue) * pow(7,sie) * prim * prim1 * prim2;

    printf("Das kleinste gemeinsame Vielfache von %d und %d lautet %d", i1, i2, kgv);

    return 0;
}