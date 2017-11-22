#include <stdio.h>

int main() {
    int eingabe = 0;
    do{
        printf("Geben Sie ein Jahr ein um das Schaltjahr zu berechnen (abbruch durch Eingabe < 0): ");
        scanf("%d", &eingabe);
        if(eingabe >= 0){
            if((eingabe % 4) == 0){
                if(((eingabe % 100) != 0) && ((eingabe % 400) != 0)){
                    printf("Dieses Jahr ist ein Schaltjahr!\n");
                }
                else{
                    printf("Dieses Jahr ist kein Schaltjahr!\n");
                }
            }
            else{
                printf("Dieses Jahr ist kein Schaltjahr!\n");
            }
        }
    }
    while(eingabe >= 0);
    return 0;
}