#include <stdio.h>

void PrintDistance(int dl){
    int i;
    for(i = 1; i <= dl; i++){
        printf(" ");
    }
}

void PrintMiddle(){
    printf(" ");
}

void main() {

    int x;
    int dl; //Distance left
    int p; //Pattern
    int l; //Line
    int c = 1; //Column
    int i; //Loop

    printf("Please enter x (pattern count & line count): ");
    scanf("%d", &x);
    printf("\n");
    if(x == 1){
        printf("*");
    }
    else if(x >= 2){
        for(l = 1; l <= x; l++){
            dl = x - l;
            for(p = 1; p <= x; p++) {
                PrintDistance(dl);
                for (i = 1; i <= c; i++) {
                    printf("*");
                }
                PrintDistance(dl);
                if(p != x){
                    PrintMiddle();
                }
            }

            printf("\n");
            c = c + 2;

        }


    }
    else{
        printf("The value of is was not valid.");
    }
    return;
}