#include <stdio.h>

void fline(int h){
    int steps = ((h + 1) / 2) + 1;
    int i;
    for(i=1; i<=steps; i++){
        printf(" ");
    }
    printf("_");
}

void mline(int h){
    int steps = h;
    int lsteps = h - 1;
    int msteps = 1;
    int i, x;

    for(i=3; i<=steps; i++){
        printf("\n");
        for(x=1; x<=lsteps; x++){
            printf(" ");
        }
        printf("/");
        for(x=1; x<=msteps; x++){
            printf(" ");
        }
        printf("\\");

        msteps++;
        lsteps--;
    }
    printf("\n");
}
void lline(int h){
    int steps = h;
    int i;
    printf("_/");
    for(i=1; i<=steps; i++){
        printf(" ");
    }
    printf("\\_\n");
}

void kegel(int h){
    fline(h);
    if(h >= 3){
        mline(h);
    }
    else{
        printf("\n");
    }
    lline(h);
}

void main() {
    int h;
    printf("Geben Sie h als ungerade Ganzzahl ein. Beende mit 0: ");
    scanf("%d", &h);

    while(h > 0 && h % 2 == 1){
        kegel(h);
        printf("Geben Sie h als ungerade  Ganzzahl ein. Beende mit 0: ");
        scanf("%d", &h);
    }
}