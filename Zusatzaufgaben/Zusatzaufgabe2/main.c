#include <stdio.h>

int main() {
    int MatrA[5][5], MatrB[5][5];
    int col, i, x;

    //Matrix a)
    for(i = 0; i < 5; i++){
        col = i + 1;
        for(x = 0; x < 5; x++){
            MatrA[i][x] = col;
            printf("%d ",col);
            col++;
        }
        printf("\n");
    }

    //BREAK
    printf("\n");

    //Matrix b)
    for(i = 0; i < 5; i++){
        if(i <= 2){
            col = 2 - i;
        }
        else{
            col = i - 2;
        }
        for(x = 0; x < 5; x++){
            MatrA[i][x] = col;
            printf("%d ",col);
            col = col + 2;
        }
        printf("\n");
    }


    //printf("Hello, World!\n");
    return 0;
}